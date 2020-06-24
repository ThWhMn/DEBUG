#include <stdio.h>

void space(int, int); // print space

int main()
{
    int matrix[100][100];
    int counter;   // Number of printed elements
    int m;         // Number of rows
    int n;         // Number of columns
    int min;       // Minimum of the nubmer of row and column
    int operation; // Variable describing the direction of operation

    scanf("%d %d", &m, &n);
    min       = ((m >= n) ? n : m);
    operation = 2 * min - 1 + (m > n);
    for (int i = 0; i < m; i++) { // Read matrix
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    counter = 0;
    for (int i = 1; i <= operation; i++) {
        switch (i % 4) {
            case 1: // print from left to right
                for (int a = (i / 4); a < (n - i / 4); a++) {
                    printf("%d", matrix[i / 4][a]);
                    counter++;
                    space(counter, m * n);
                }
                break;
            case 2: // print from top to bottom
                for (int a = (i / 4 + 1); a < (m - i / 4); a++) {
                    printf("%d", matrix[a][n - i / 4 - 1]);
                    counter++;
                    space(counter, m * n);
                }
                break;
            case 3: // print from right to left
                for (int a = (i / 4 + 1); a < (n - i / 4); a++) {
                    printf("%d", matrix[m - i / 4 - 1][n - a - 1]);
                    counter++;
                    space(counter, m * n);
                }
                break;
            case 0: // print from bottom to top
                for (int a = (i / 4); a < (m - i / 4); a++) {
                    printf("%d", matrix[m - a - 1][i / 4 - 1]);
                    counter++;
                    space(counter, m * n);
                }
                break;
        }
    }
    return 0;
}

void space(int a, int b)
{
    if (a != b) {
        printf(" ");
    }
}