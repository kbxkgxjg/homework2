#include<stdio.h>
int main()
{
	long long i,j,n;
	printf("请输入你想要循环执行多少行\n");
	scanf("%lld",&n);
	for(i = 1;i <= n;i++)
	{
		for(j=1;j <= i;j++)
		{
			printf("%lld5*%lld5 ",j,i);
		}
		printf("\n");
	}
	return 0;
 } 
