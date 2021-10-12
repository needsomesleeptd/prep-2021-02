#include <stddef.h>
#include "utils.h"
#include <stdio.h>

size_t timer_from(int from) {
    size_t counter = 0;
    for (int i = from; i >= 0; i--) {
        ++counter;
        if (i == 0) {
            printf("%d", i);
        } else {
            printf("%d ", i);
        }
    }
    return counter;
}

// TODO: Implement `power of` function

int custom_pow(int base, int power) {
    int ans = 1;
    for (int i=0; i < power; i++) {
        ans*=base;
    }
    return ans;
}

