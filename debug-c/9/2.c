#include <stdio.h>

int main()
{
    int N;        //总台阶数
    int step[50]; // step[N]N级台阶的方法数
    int i;

    step[1] = 0; // initialize step[]
    step[2] = 1;
    step[3] = 1;
    step[4] = 1;
    scanf("%d", &N);
    for (i = 5; i <= N; i++) {
        step[i] = step[i - 2] + step[i - 3];
    }

    printf("%d", step[N]);
    return 0;
}