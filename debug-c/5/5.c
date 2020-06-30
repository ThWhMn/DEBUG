#include <stdio.h>
#include <string.h>

void swap(char *b, char *c);

int main()
{
    char name[10][21];
    int  i; // intermediate variable
    int  j;
    int  l;
    int  m = 10;
    for (i = 0; i < m; i++) {
        scanf("%s", name[i]); // input
    }
    for (j = 0; j < m; j++) {
        for (i = 0; i < m - 1 - j; i++) {
            if (strcmp(name[i], name[i + 1]) > 0) {
                for (l = 0; l < 21; l++) {
                    swap(&name[i][l], &name[i + 1][l]); // swap one by one
                }
            }
        }
    }
    for (i = 0; i < m; i++) {
        printf("%s\n", name[i]); // output
    }
    return 0;
}

void swap(char *b, char *c)
{
    char temp;
    temp = *b;
    *b   = *c;
    *c   = temp;
}