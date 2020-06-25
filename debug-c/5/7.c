#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap(char **b, char **c)
{
    char *temp = (char *)malloc(31);
    temp = *b;
    *b = *c;
    *c = temp;
}
int main()
{
    char *name[10];
    int i;
    int j;
    int m = 10;
    for (i = 0; i < 10; i++) {
        name[i] = (char *)malloc(31);
    }
    for (i = 0; i < m; i++) {
        scanf("%s", name[i]); //output
    }
    for (j = 0; j < m; j++) {
        for (i = 0; i < m - j - 1; i++) {
            if (strcmp(name[i], name[i + 1]) > 0) {
                swap(name + i, name + i + 1); //swap one by one
            }
        }
    }
    for (i = 0; i < m; i++) {
        printf("%s\n", name[i]); //output
    }
    return 0;
}
