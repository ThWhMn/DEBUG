#include <stdio.h>
#include <string.h>

int main()
{
    char pms[3];
    char change_pms[100][3];
    int  i;
    int  j;
    int  a = 0; //�ļ�������Ȩ��ֵ
    int  b = 0;
    int  num;

    //���뵱ǰ�ļ�Ȩ��
    scanf("%s", pms);

    //������ӻ���ɾ�����ļ�Ȩ��
    i = 0;
    while (scanf("%s", change_pms[i++]) != EOF) {
        ;
    }
    num = i;

    //�ж�ԭ�ļ���Ȩ�ޣ���ʮ���Ʊ�ʾ
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