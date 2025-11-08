#include <stdio.h>
int main() {
    int n, rec = 0, r, org;
    printf("Enter a number: ");
    scanf("%d", &n);

    org = n;
    while (n != 0) {
        r = n % 10;
        rec = rec * 10 + r;
        n /= 10;
    }

    if (org == rec)
        printf("%d is a palindrome number.\n", org);
    else
        printf("%d is not a palindrome number.\n", org);

    return 0;
}
