#include<stdio.h>
int main()
{
	long long i,j,n;
	printf("����������Ҫѭ��ִ�ж�����\n");
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
