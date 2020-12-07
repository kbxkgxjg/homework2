#include<stdio.h>
#include<math.h>
int main()
{
	int er[100];
	int i = 0,sum,mid;
	int ans = 0,j = 0;
	printf("请输入一个数字");
	scanf("%d",&sum);
	for(i = 0;i <= 8;i++)
	{
		er[i] = 0;
	}
	i = 0;
	while(sum != 0)
	{
//		printf("%d %d ",sum,i);
		mid = sum % 2;
//		printf("%d ",mid);
		er[i] = mid;
//		printf("%d\n",er[i]);
		sum = sum / 2;
		i++;
	}
//	for(i = 0;i <= 7;i++)
//	{
//		printf("%d ",er[i]);
//	}
//	printf("%d\n",er[7]);
	if(er[7] == 0)
	{
		printf("这人是个男生 学号为"); 
	}
	else if(er[7] == 1)
	{
		printf("这人是个女生 学号为");
	}
	for(i = 0;i <= 6 ;i++)
	{
		ans += pow(2,j) * er[i];
		j++;
	}
		printf("%d",ans); 
 } 
