#include <stdio.h>
#include <string.h>
int main()
{
    int matrix_a[10][10];
    int matrix_b[10][10];
    int m;
    int n;
    scanf("%d%d", &m, &n);//input row and line
    int mat[10][10];
    memset(mat, 0, sizeof(mat));//initialize
    int i;
    int j;
    int k;
    for (i = 0; i < m; i++) {//input matrix a
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }
    for (j = 0; j < n; j++) {//input matrix b
        for (i = 0; i < m; i++) {
            scanf("%d", &matrix_b[j][i]);
        }
    }
    for (i = 0; i < m; i++) {//process
        for (j = 0; j < m; j++) {
            for (k = 0; k < n; k++) {
                mat[i][j] += (matrix_a[i][k] * matrix_b[k][j]);
            }
        }
    }
    for (i = 0; i < m; i++) {//output
        for (j = 0; j < m; j++) {
            if (j == m - 1) {
                printf("%d\n", mat[i][j]);
            } else {
                printf("%d ", mat[i][j]);
            }
        }
    }
    return 0;
}