#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 20; i ++) {
        if (i % 4 == 0) {
            printf("PIM\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}