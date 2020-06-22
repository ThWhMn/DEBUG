//============================================================================
// Name        : HelicallyPrintMatrix.cpp
// Author      : Lee
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdbool.h>

bool helicallyPrint(int a[][4], int M, int N)
{
	if (M <= 0 || N <= 0)
		return false;
	int row = 1;
	int col = 1;
	while (row <= M - row + 1 && col <= N - col + 1)
	{
		for (int i = col; i <= N - col + 1; i++)
			printf("%d ", a[row - 1][i - 1]);
		for (int i = row + 1; i <= M - row + 1; i++)
		{
			printf("%d ", a[i - 1][N - col]);
		}
		if (row != M - row + 1)
		{
			for (int i = N - col; i >= col; i--)
			{
				printf("%d ", a[M - row][i - 1]);
			}
		}
		if (col != N - col + 1)
		{
			for (int i = M - row; i >= row + 1; i--)
			{
				printf("%d ", a[i - 1][col - 1]);
			}
		}
		row++;
		col++;
	}
	return true;
}
int main()
{
	int matrix[100][100];
	int n;
	int m;
	int flag = 1;
	int i = 0, j = 0, k = 0;
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &matrix[i][j]);

	helicallyPrint(matrix, m, n);
	return 0;
}