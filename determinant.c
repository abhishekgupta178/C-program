#include <stdio.h>
int main() {
    int n;
    printf("Enter the order of the matrix (2 or 3): ");
    scanf("%d", &n);

    int a[3][3];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int det;
    if (n == 2) {
        det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    } else if (n == 3) {
        det = a[0][0]*(a[1][1]*a[2][2] - a[2][1]*a[1][2])
            - a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2])
            + a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);
    } else {
        printf("This program supports only 2x2 or 3x3 matrices.\n");
        return 0;
    }

    printf("Determinant of the matrix = %d\n", det);
    return 0;
}
