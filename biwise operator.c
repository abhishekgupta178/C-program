#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("a & b = %d\n", a & b);  // Bitwise AND
    printf("a | b = %d\n", a | b);  // Bitwise OR
    printf("a ^ b = %d\n", a ^ b);  // Bitwise XOR

    return 0;
}
