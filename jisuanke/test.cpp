#include <iostream>
using namespace std;

int MaxSubsequenceSum(int A[], int n)
{
    int tempSum = 0;
    int maxSum = 0;
    for (int j = 0; j < n; j++) // 子问题后边界
    {
        tempSum = (tempSum + A[j]) > A[j] ? (tempSum + A[j]) : A[j];
        if (tempSum > maxSum) // 更新最大和
            maxSum = tempSum;
    }
    return maxSum;
}

int n, a[1000001];
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int maxSubSum = MaxSubsequenceSum(a, n);
    cout << "The max subsequence sum of a is: " << maxSubSum << endl;
    system("pause");
    return 0;
}