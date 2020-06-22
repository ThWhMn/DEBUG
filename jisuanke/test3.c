#include <stdio.h>
#include <stdlib.h>

long long climbStairs(int n)
{
	if (n <= 2)
		return 1;
	if (n == 3)
		return 2;

	long long a = 1;
	long long b = 1;
	long long c = 1;
	long long curr;
	for (int i = 4; i <= n; ++i)
	{
		curr = a + b + c;
		a = b;
		b = c;
		c = curr;
		curr %= 100007;
	}

	return curr;
}

int main()
{
	FILE *f;
	f = fopen("stairs.in", "r");
	int inputNum;
	fscanf(f, "%d", &inputNum);
	long long result = climbStairs(inputNum);
	fclose(f);
	f = fopen("stairs.out", "w");
	fprintf(f, "%lld", result);
	return 0;
}