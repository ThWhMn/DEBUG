#include<stdio.h>
#include<math.h>


int main() {
    int n = 10;
    int m;
    int a[10];
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

 
	int temp= 0; //中间变量
 
	for(int i=0;i<10;i++) //进行10次循环
	{
		for(int j=i+1;j<10;j++) //循环比较剩余的变量
		{
			if(a[i] < a[j]) //如果前面一个数比后面数大，交换两个数的值
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
 
	for(int i=0;i<10;i++) //循环输出排序以后的结果
	{
		printf("%d ",a[i]);
	}
 return 0;

} 
