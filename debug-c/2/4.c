#include <stdio.h>
#include <string.h>
int main()
{
    int matrix_a[10][10];
    int matrix_b[10][10];
    int m3[10][10];
    int m; /* number of rows */
    int n; /* number of columns */

    scanf("%d %d", &m, &n);
    memset(m3, 0, sizeof(m3));    /* Clear m3 */
    for (int i = 0; i < m; i++) { /* Read matrix_a */
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) { /* Read matrix_b */
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }
    /* Put the result of matrix multiplication into m3 */
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++) {
                m3[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", m3[i][j]);
            if (j != m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}