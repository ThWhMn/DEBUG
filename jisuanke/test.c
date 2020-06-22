// mine
#include <stdio.h>

int main()
{
	char c, ch;
	while ((c = getchar()) != '\n')
	{
		ch = c;
	}
	int a = ch - '0';
	if (a % 2 != 0)
	{
		printf("NO");
	}
	else
		printf("YES");
	return 0;
}