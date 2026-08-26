#include <stdio.h>

int main(void) {
    int plim = 1;

    for (int i = 1; i <= 20; i ++) {
        if (i % 4 == 0) {
            printf("PLIM\n");
        } else {
            printf("%d\n", plim);
        }
        plim ++;
    }
    return 0;
}