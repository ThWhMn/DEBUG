#include <stdio.h>

int main()
{
    int matrix_a[10][10];
    int matrix_b[10][10];
    int m;       // row
    int n;       // line
    int i, j, k; // declaration
    int temp;
    scanf("%d%d", &m, &n);
    int matrixResult[10][10];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) { // input matrix a
            scanf("%d", &matrix_a[i][j]);
        }
    }
    for (i = 0; i < n; i++) { // input matrix b
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }
    for (i = 0; i < m; i++) { // process
        for (j = 0; j < m; j++) {
            temp = 0;
            for (k = 0; k < n; k++) {
                temp += matrix_a[i][k] * matrix_b[k][j];
            }
            matrixResult[i][j] = temp;
            if (j == m - 1) {
                printf("%d", matrixResult[i][j]);
                if (i != m - 1) {
                    printf("\n");
                }
            } else {
                printf("%d ", matrixResult[i][j]);
            }
        }
    }
    return 0;
}