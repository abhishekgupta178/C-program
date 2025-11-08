#include <stdio.h>
int main() {
    int n, i, f = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        f = 1;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            f = 1;
            break;
        }
    }

    if (f == 0)
        printf("%d is a Prime number.\n", n);
    else
        printf("%d is not a Prime number.\n", n);

    return 0;
}
