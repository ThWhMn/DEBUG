#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool compareTwoStringIgnoreCases(char a[], char b[]);
int main()
{
	char aString[200], bString[200];
	gets(aString);
	gets(bString);
	/*aString="a A bb BB ccc CCC";
    bString="Aa BBbb CCCccc";*/

	if (compareTwoStringIgnoreCases(aString, bString))
		printf("YES");
	else
		printf("NO");
	return 0;
}
bool compareTwoStringIgnoreCases(char a[], char b[])
{
	int i, j;
	for (i = 0, j = 0; i < strlen(a) && j < strlen(b);)
	{
		if (a[i] == b[j] || abs(a[i] - b[j]) == 32) //ascii码：大写小写差32;空格的ascii码对应十进制为32
		{
			i++, j++;
		}
		else if (a[i] == 32)
			i++;
		else if (b[j] == 32)
			j++;
		else
			return false;
	}
	return true;
}