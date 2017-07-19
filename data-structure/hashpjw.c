//
// Created by Shawn15619 on 19/07/2017.
//

#include "hashpjw.h"

/* hash pjw */

unsigned int hashpjw (const void *key) {
    const char *ptr = key;
    unsigned int val = 0;
    while (*ptr != '\0') {
        unsigned int temp;
        val = (val << 4) + *ptr;

        if (temp = (val & 0xf0000000)) {
            val ^= (temp >> 24);
            val ^= temp;
        }
        ptr++;
    }
    // in practice , replace PRIME_TBLESIZ with the actual table size
    return val % PRIME_TBLESIZ;
}