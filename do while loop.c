#include <stdio.h>
int main() {
    int i = 1;
    printf("Odd numbers between 1 and 100 are:\n");

    do {
        if (i % 2 != 0)
            printf("%d ", i);
        i++;
    } while (i <= 100);

    printf("\n");
    return 0;
}
