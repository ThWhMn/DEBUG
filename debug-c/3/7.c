#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m, n, i, j;
    int startX, startY;
    int endX, endY;
    int count = 0;

    //��������m������n
    scanf("%d %d", &m, &n);
    // ����һ��m*n�ľ���
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // �ж�ѭ��Ȧ��������
    startX = 0;
    startY = 0;
    endX   = m - 1;
    endY   = n - 1;
    while (count != m * n) {
        // �����һ��
        if (startY <= endY && count != m * n) {
            for (j = startY; j <= endY; j++) {
                printf("%d", matrix[startX][j]);
                count++;
                if (count != m * n) {
                    printf(" ");
                }
            }
        }
        //����������������ڶ���
        if (startX <= endX && count != m * n) {
            for (j = startX + 1; j <= endX; j++) {
                printf("%d", matrix[j][endY]);
                count++;
                if (count != m * n) {
                    printf(" ");
                }
            }
        }
        //���������������������
        if (endX >= startX && startY <= endY && count != m * n) {
            for (j = endY - 1; j >= startY; j--) {
                printf("%d", matrix[endX][j]);
                count++;
                if (count != m * n) {
                    printf(" ");
                }
            }
        }
        //������������������Ĳ�
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