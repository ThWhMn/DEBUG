#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m;         // Number of rows
    int n;         // Number of columns
    int start = 0; // The start of outermost matrix
    int column, row;
    int flag = 1; // Used to judge whether printed the end

    scanf("%d%d", &m, &n);
    column = n;
    row    = m;
    for (int i = 0; i < m; i++) { // Read matrix
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    while (start < column && start < row && flag) {
        if (n == 1) { // if there are only one column
            for (int i = 0; i < m; i++) {
                if (i == m - 1) {
                    printf("%d", matrix[i][0]);
                } else
                    printf("%d ", matrix[i][0]);
            }
        } else if (m == 1) { // if there are only one row
            for (int j = 0; j < n; j++) {
                if (j == n - 1) {
                    printf("%d", matrix[0][j]);
                } else
                    printf("%d ", matrix[0][j]);
            }
        } else {
            for (int j = start; j < column && flag; j++) { // print from L to R
                if (start + 1 == row && column - 1 == j) {
                    printf("%d", matrix[start][j]);
                    flag = 0;
                    break;
                } else
                    printf("%d ", matrix[start][j]);
            }
            for (int i = start + 1; i < row && flag;
                 i++) { // print from Top to Bottom
                if (i + 1 == row && column - 1 == start) {
                    printf("%d", matrix[i][column - 1]);
                    flag = 0;
                    break;
                } else
                    printf("%d ", matrix[i][column - 1]);
            }
            for (int j = column - 2; j >= start && flag;
                 j--) { // print from R to L
                if (row - 2 == start && j == start) {
                    printf("%d", matrix[row - 1][j]);
                    flag = 0;
                    break;
                } else
                    printf("%d ", matrix[row - 1][j]);
            }
            for (int i = row - 2; i > start && flag; i--) { // print from B to T
                if (i == start + 1 && start + 1 == column - 1) {
                    printf("%d", matrix[i][start]);
                    break;
                } else
                    printf("%d ", matrix[i][start]);
            }
        }
        start++; // put the "start" to the start of inner circle matrix
        column--;
        row--;
        // inner circle matrix is
        // one row & column less than the outer circle matrix
    }
    return 0;
}