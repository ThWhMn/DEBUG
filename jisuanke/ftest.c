#include <stdio.h>

int dp[1010];

int main()
{
    FILE *f;
    f = fopen("stairs.in", "r");
    int n;
    fscanf(f, "%d", &n);

    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j >= 0; j -= 2)
        {
            dp[i] += dp[j];
            dp[i] = dp[i] % 100007; //及时取模
        }
    }
	fclose(f);
	f = fopen("stairs.out", "w");
	fprintf(f, "%lld", dp[n]);
    fclose(f);
    return 0;
}
