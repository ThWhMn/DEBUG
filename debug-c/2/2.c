#include <stdio.h>

int main()
{
    int matrix_a[10][10];
    int matrix_b[10][10];
    int matrix_c[10][10];
    int c;
    int i, j;
    int m; /* number of rows */
    int n; /* number of columns */

    scanf("%d %d", &m, &n);
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
    for (i = 0; i < m; i++) { /* Set the matrix_c to 0 */
        for (j = 0; j < m; j++) {
            matrix_c[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++) { /* Matrix multiplication */
        for (j = 0; j < m; j++) {
            for (c = 0; c < n; c++) {
                matrix_c[i][j] += matrix_a[i][c] * matrix_b[c][j];
            }
        }
    }
    for (i = 0; i < m; i++) { /* Print result */
        for (j = 0; j < m; j++) {
            if (j != m - 1) {
                printf("%d ", matrix_c[i][j]);
            } else {
                printf("%d\n", matrix_c[i][j]);
            }
        }
    }
    return 0;
}