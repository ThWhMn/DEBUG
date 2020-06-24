#include <stdio.h>

int main()
{
    int matrix[100][100];
    int i, j;
    int k;  // Number of elements
    int m;  // Number of rows
    int n;  // Number of columns
    int m0; // unprinted rows
    int n0; // unprinted columns

    scanf("%d %d", &m, &n);
    m0 = m;
    n0 = n;
    k  = m * n;
    for (i = 0; i < m; i++) { // read matrix
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (m == 1 || n == 1) { // if there are only one row or column
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                printf("%d", matrix[i][j]);
                if (j != n - 1)
                    printf(" ");
            }
            if (i != m - 1)
                printf(" ");
        }
        return 0;
    }
    i = 0; // i is the number of printed elements
    while (i != k) {
        for (j = n - n0; j < n0 - 1; j++) { // print from left to right
            printf("%d", matrix[m - m0][j]);
            i++;
            if (i == k)
                break;
            else
                printf(" ");
        }
        for (j = m - m0; j < m0 - 1; j++) { // print from top to bottom
            printf("%d", matrix[j][n0 - 1]);
            i++;
            if (i == k)
                break;
            else
                printf(" ");
        }
        for (j = n0 - 1; j > n - n0; j--) { // print from right to left
            printf("%d", matrix[m0 - 1][j]);
            i++;
            if (i == k)
                break;
            else
                printf(" ");
        }
        for (j = m0 - 1; j > m - m0; j--) { // print from bottom to top
            printf("%d", matrix[j][n - n0]);
            i++;
            if (i == k)
                break;
            else
                printf(" ");
        }
        n0--; // unprinted columns minus one
        m0--; // unprinted rows minus one
    }
    return 0;
}