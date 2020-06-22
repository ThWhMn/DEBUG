// mine
#include <stdio.h>
#include <stdbool.h>

bool mark[1000001];

int main()
{
	mark[0] = mark[1] = 1;
	register int i, j, k;
	int n, m;

	for (i = 2; i <= 1000; i = -~i)
	{
		if (mark[i] != 1)
		{
			k = 1000000 / i;
			for (j = 2; j <= k; j = -~j)
				mark[i * j] = 1;
		}
	}
	scanf("%d", &n);
	for (j = 0; j < n; j = -~j)
	{
		scanf("%d", &m);

		for (i = 2; i <= (m >> 1); i = -~i)
			if (mark[i] == 0 && mark[m - i] == 0)
			{
				printf("%d %d\n", i, m - i);
				break;
			}
	}
	return 0;
}