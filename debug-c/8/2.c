#include <stdio.h>
#include <string.h>

int main()
{
    int  n;
    char names[101][101];
    char max[101];

    scanf("%d\n", &n);            // input
    for (int i = 0; i < n; i++) { // read names[][]
        gets(names[i]);
    }

    for (int i = 0; i < n; i++) { // bubble sort & put the longest to the last
        for (int j = 0; j < n - 1 - i; j++) {
            if (strlen(names[j]) >= strlen(names[j + 1])) {
                strcpy(max, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], max);
            }
        }
    }

    printf("%s", names[n - 1]);
    return 0;
}