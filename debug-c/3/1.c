#include <math.h>
#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m,n;
    int i, j, x;

    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    x = 0;
    if (m == 1) {
        for (j = 0; j < n; j++) {
            printf("%d", matrix[0][j]);
            x++;
            if (x != m * n)
                printf(" ");
        }
    } else if (n == 1) {
        for (j = 0; j < m; j++) {
            printf("%d", matrix[j][0]);
            x++;
            if (x != m * n)
                printf(" ");
        }
    } else {
        int min = (m >= n) ? n : m;
        int ope = 2 * min - 1 + (m > n);
        for (i = 0; i <= ope; i++) {
            switch (i % 4) {
                case 0:
                    for (j = (i + 1) / 4; j < n - (i + 1) / 4; j++) {
                        printf("%d", matrix[(i + 1) / 4][j]);
                        x++;
                        if (x != m * n)
                            printf(" ");
                    }
                    break;
                case 1:
                    for (j = (i + 1) / 4 + 1; j < m - (i + 1) / 4; j++) {
                        printf("%d", matrix[j][n - 1 - (i + 1) / 4]);
                        x++;
                        if (x != m * n)
                            printf(" ");
                    }
                    break;
                case 2:
                    for (j = 1 + (i + 1) / 4; j < n - (i + 1) / 4; j++) {
                        printf("%d", matrix[m - (i + 1) / 4 - 1][n - j - 1]);
                        x++;
                        if (x != m * n)
                            printf(" ");
                    }
                    break;
                case 3:
                    for (j = (i + 1) / 4; j < (m - (i + 1) / 4); j++) {
                        printf("%d", matrix[m - j - 1][(i + 1) / 4 - 1]);
                        x++;
                        if (x != m * n)
                            printf(" ");
                    }
                    break;
            }
        }
    }

    return 0;
}
