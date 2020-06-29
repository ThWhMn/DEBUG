#include <stdio.h>

int main()
{
    int matrix_a[10][10];
    int matrix_b[10][10];
    int result[10][10];
    int i, j, k;
    int m; /* number of rows */
    int n; /* number of columns */
    int sum;

    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) { /* Set the result[][] to 0 */
        for (j = 0; j < m; j++) {
            result[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++) { /* Read matrix_a */
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }
    for (i = 0; i < n; i++) { /* Read matrix_b */
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }
    for (i = 0; i < m; i++) { /* Matrix multiplication */
        for (j = 0; j < m; j++) {
            for (k = 0; k < n; k++) {
                result[i][j] += (matrix_a[i][k] * matrix_b[k][j]);
            }
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%d", result[i][j]);
            if (j != m - 1) {
                printf(" ");
            }
        }
        if (i != m - 1) {
            printf("\n");
        }
    }
    return 0;
}