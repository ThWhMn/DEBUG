#include <stdio.h>
#include <string.h>

int main()
{
    char names[10][21];
    char name[21];
    char temp[21];
    int  i, j;

    for (i = 0; i < 10; i++) { // read names[][]
        scanf("%s", name);
        for (j = 0; j < strlen(name); j++) {
            names[i][j] = name[j];
        }
    }

    for (i = 0; i < 10; i++) { // bubble sort
        for (j = 0; j < 9 - i; j++) {
            if (strcmp(names[j], names[j + 1]) >= 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    for (i = 0; i < 10; i++) { // print sorted names[][]
        printf("%s\n", names[i]);
    }

    return 0;
}