#include <stdio.h>

int main()
{
    int N; //total
    int i;
    int part[51];
    part[0] = 0;
    part[1] = 0;
    part[2] = 1;
    part[3] = 1;
    scanf("%d", &N); //input
    for (i = 4; i <= N; i++) {
        part[i] = part[i - 2] + part[i - 3];
    }
    printf("%d", part[N]); //output
    return 0;
}