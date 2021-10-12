#include <stdio.h>
#include "recur.h"
void rec(int x, int curpos) {
    if (curpos == x) {
        printf("%d", curpos);
        return;
    }
    if (curpos > x) {
        printf("%d ", curpos);
        curpos--;
        rec(x, curpos);
    } else if (curpos < x) {
        printf("%d ", curpos);
        curpos++;
        rec(x, curpos);
    }
}
