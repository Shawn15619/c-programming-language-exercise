//
// Created by Shawn15619 on 19/07/2017.
//

#include <stdlib.h>
#include <string.h>

#include "list.h"
#include "chtbl.h"


int chtbl_init(CHTbl *htbl, int buckets, int (*h)(const void *key), int (*match)(const void *key1, const void *key2), void (*destroy)(void *data)) {
    int i;

    // allocate spae for the hash table
    if ((htbl->table = (List *)malloc(buckets * sizeof(List))) == NULL) {
        return -1;
    }

    // initialize the buckets
    htbl->buckets = buckets;
    for (i = 0; i < htbl->buckets; i++)
        list_init(&htbl->table[i], destroy);

    // encapsulate the functions
    htbl->h = h;
    htbl->match = match;
    htbl->destroy = destroy;

    // initialize the number of elements in the table
    htbl->size = 0;

    return 0;
}

void chtbl_destroy(CHTbl *htbl) {
    int i;
    // destroy each bucket
    for (i = 0; i < htbl->buckets; i++) {
        list_destroy(&htbl->table[i]);
    }
    // free the storage allocated for the hash table
    free(htbl->table);

    // no operations are allowed now, but clear the structure as a precaution
    memset(htbl, 0, sizeof(CHTbl));

    return;

}

int chtbl_insert(CHTbl *htbl, const void *data) {
    void *temp;
    int bucket, retval;

    // do nothing if the data is already in the table
    temp = (void *)data;
    if (chtbl_lookup(htbl, &temp) == 0)
        return 1;

    // hash the key
    bucket = htbl->h(data) % htbl->buckets;

    // insert the data into the bucket
    if ((retval = list_ins_next(&htbl->table[bucket], NULL, data)) == 0)
        htbl->size++;

    return retval;
}

int chtbl_remove(CHTbl *htbl, void **data) {
    ListElmt *element, *prev;
    int bucket;

    // hash the key
    bucket = htbl->h(*data) % htbl->buckets;

    // search for the data in the bucket
    prev = NULL;
    for (element = list_head(&htbl->table[bucket]); element != NULL; element = list_next(element)) {
        if (htbl->match(*data, list_data(element))) {
            // remove the data from the bucket
            if (list_rem_next(&htbl->table[bucket], prev, data) == 0) {
                htbl->size--;
                return 0;
            } else {
                return -1;
            }
        }
        prev = element;
    }
    // return that the data was not found
    return -1;
}


int chtbl_lookup(const CHTbl *htbl, void **data) {
    ListElmt *element;
    int bucket;

    // hash the key
    bucket = htbl->h(*data) % htbl->buckets;

    // search for the data in the bucket
    for (element = list_head(&htbl->table[bucket]); element != NULL; element = list_next(element)) {
        if (htbl->match(*data, list_data(element))) {
            // pass back the data from the table
            *data = list_data(element);
            return 0;
        }
    }
    // return the data was not found
    return -1;
}