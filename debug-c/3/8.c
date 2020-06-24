#include <stdio.h>

int main()
{
    int matrix[100][100];
    int matrix_[100][100];

    int i, j;
    int m;         // Number of rows
    int n;         // Number of columns
    int count = 0; // count is the number of printed elements
    int max;       // Number of elements
    int t;         // temporary variable

    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) { // input matrix
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (j < n - 1)
                scanf(" ");
        }
    }
    max = m * n;
    if (m == 1) { // there is only one row
        for (j = 0; j < n; j++) {
            printf("%d", matrix[0][j]);
            if (j != n - 1)
                printf(" ");
        }
        return 0;
    }
    if (n == 1) { // there is only one column
        for (i = 0; i < m; i++) {
            printf("%d", matrix[i][0]);
            if (i != m - 1)
                printf(" ");
        }
        return 0;
    }
    // output the first line
    for (j = 0; j < n; j++) {
        printf("%d ", matrix[0][j]);
        count++;
    }
    do {
        // rotate the matrix by -90 degree to matrix_
        for (i = 0; i < n; i++) {
            for (j = 0; j < m - 1; j++) {
                matrix_[i][j] = matrix[j + 1][n - 1 - i];
            }
        }
        for (j = 0; j < m - 1; j++) {
            printf("%d", matrix_[0][j]);
            count++;
            if (count < max)
                printf(" ");
        }
        // override matrix with new matrix_
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                matrix[i][j] = matrix_[i][j];
            }
        }
        t = m;
        m = n;
        n = t - 1; // the number of matrix_ columns reduced by one
    } while (m >= 1 && n >= 1);
    return 0;
}