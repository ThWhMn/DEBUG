#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m;           // Number of rows
    int n;           // Number of columns
    int k = 0;       // the index of the row to print next
    int l = 0;       // the index of the column to print next
    int num;         // Number of elements
    int printed = 0; // Number of printed elements

    scanf("%d %d", &m, &n);
    num = m * n;
    for (int i = 0; i < m; i++) { // Read matrix
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    while (k < m && l < n) {
        /* Print the first row from the remaining rows */
        for (int i = l; i < n; i++) {
            printf("%d", matrix[k][i]);
            printed++;
            if (printed != num)
                printf(" ");
        }
        k++;
        /* Print the last column from the remaining columns */
        for (int i = k; i < m; i++) {
            printf("%d", matrix[i][n - 1]);
            printed++;
            if (printed != num)
                printf(" ");
        }
        n--;
        /* Print the last row from the remaining rows */
        if (k < m) {
            for (int i = n - 1; i >= l; i--) {
                printf("%d", matrix[m - 1][i]);
                printed++;
                if (printed != num)
                    printf(" ");
            }
            m--;
        }
        /* Print the first column from the remaining columns */
        if (l < n) {
            for (int i = m - 1; i >= k; i--) {
                printf("%d", matrix[i][l]);
                printed++;
                if (printed != num)
                    printf(" ");
            }
            l++;
        }
    }
    return 0;
}