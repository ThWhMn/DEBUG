#include <stdio.h>

int main(void) {
    int mtxA[10][10], mtxB[10][10], mtxC[10][10], m, n;  //declaration
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mtxC[i][j] = 0;
        }
    }
    scanf("%d%d", &m, &n);    //input
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mtxA[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mtxB[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {    //process
        for (int j = 0; j < m; j++) {
            mtxC[i][j] = 0;
            for (int k = 0; k < n; k++) {
                mtxC[i][j] += mtxA[i][k] * mtxB[k][j];//calculate
            }
        }
    }
    for (int i = 0; i < m; i++) {    //output
        for (int j = 0; j < m; j++) {
            j != m - 1? printf("%d ", mtxC[i][j]):printf("%d", mtxC[i][j]);
        }
        printf("\n");
    }
    return 0;
}