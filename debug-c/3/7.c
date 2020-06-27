#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m, n, i, j;
    int startX, startY;
    int endX, endY;
    int count = 0;

    //输入行数m，列数n
    scanf("%d %d", &m, &n);
    // 输入一个m*n的矩阵
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 判断循环圈数的条件
    startX = 0;
    startY = 0;
    endX   = m - 1;
    endY   = n - 1;
    while (count != m * n) {
        // 输出第一步
        if (startY <= endY && count != m * n) {
            for (j = startY; j <= endY; j++) {
                printf("%d", matrix[startX][j]);
                count++;
                if (count != m * n) {
                    printf(" ");
                }
            }
        }
        //满足以下条件输出第二步
        if (startX <= endX && count != m * n) {
            for (j = startX + 1; j <= endX; j++) {
                printf("%d", matrix[j][endY]);
                count++;
                if (count != m * n) {
                    printf(" ");
                }
            }
        }
        //满足以下条件输出第三步
        if (endX >= startX && startY <= endY && count != m * n) {
            for (j = endY - 1; j >= startY; j--) {
                printf("%d", matrix[endX][j]);
                count++;
                if (count != m * n) {
                    printf(" ");
                }
            }
        }
        //满足以下条件输出第四步
        if (endX >= startX && startY <= endY && count != m * n) {
            for (i = endX - 1; i >= startX + 1; i--) {
                printf("%d", matrix[i][startX]);
                count++;
                if (count != m * n) {
                    printf(" ");
                }
            }
        }
        startX++;
        startY++;
        endX--;
        endY--;
    }
    return 0;
}