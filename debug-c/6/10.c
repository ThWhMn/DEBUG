#include <stdio.h>
#include <string.h>

int main()
{
    char pms[3];
    char change_pms[100][3];
    int  i;
    int  j;
    int  a = 0; //文件本来的权限值
    int  b = 0;
    int  num;

    //输入当前文件权限
    scanf("%s", pms);

    //输入添加或者删除的文件权限
    i = 0;
    while (scanf("%s", change_pms[i++]) != EOF) {
        ;
    }
    num = i;

    //判断原文件的权限，用十进制表示
    for (i = 0; i < strlen(pms); i++) {
        if (pms[i] == 'r') {
            a += 4;
        } else if (pms[i] == 'w') {
            a += 2;
        } else if (pms[i] == 'x') {
            a += 1;
        }
    }

    // change authority
    for (i = 0; i < num; i++) {
        j = 0;
        if (change_pms[i][j] == '+') {
            if (change_pms[i][j + 1] == 'r') {
                b += 4;
            } else if (change_pms[i][j + 1] == 'w') {
                b += 2;
            } else if (change_pms[i][j + 1] == 'x') {
                b += 1;
            }
        } else {
            if (change_pms[i][j + 1] == 'r') {
                b -= 4;
            } else if (change_pms[i][j + 1] == 'w') {
                b -= 2;
            } else if (change_pms[i][j + 1] == 'x') {
                b -= 1;
            }
        }
    }
    printf("%d", a + b);
    return 0;
}