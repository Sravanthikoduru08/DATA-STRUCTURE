#include <stdio.h>

int main() {
    int a, b, c, d, m1[10][10], m2[10][10], m[10][10];

    printf("Enter the number of rows and columns:\n");
    scanf("%d%d", &a, &b);

    printf("Enter elements of matrix one:\n");
    for (c = 0; c < a; c++) {
        for (d = 0; d < b; d++) {
            scanf("%d", &m1[c][d]);
        }
    }

    printf("Enter elements of matrix two:\n");
    for (c = 0; c < a; c++) {
        for (d = 0; d < b; d++) {
            scanf("%d", &m2[c][d]);
        }
    }

    printf("Addition of the two matrices is below:\n");
    for (c = 0; c < a; c++) {
        for (d = 0; d < b; d++) {
            m[c][d] = m1[c][d] + m2[c][d];
            printf("%d\t", m[c][d]);
        }
        printf("\n");
    }

    return 0;
}