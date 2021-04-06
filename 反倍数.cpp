#include<stdio.h>
int main()
{
	int n;
	int i , count = 0;
	scanf("%d" , &n);
	int num1 , num2 , num3;
	scanf("%d %d %d" , &num1 , &num2 , &num3);
	
	for(i = 1 ; i <= n ; i++)
	{
		if((i % num1 != 0)&&(i % num2 != 0)&&(i % num3 != 0))
		{
			count ++;
		}
	}
	printf("%d" , count);
	return 0;
}
