#include<stdio.h>
#include<math.h>
int main()
{
	int n , i , j , flag;
	int a[10];
	scanf("%d" , &n);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d" , &a[i]);
	}
	for(i = 0 ; i < n ; i++)
	{
		flag = 0;
		if(a[i] == 1)
		{
			printf("No\n");
			continue;
		}
		for(j = 2; j < sqrt(a[i]); j++)
		{
		if(a[i] % j == 0 )
		{
			printf("No\n" , a[i]);
			flag = 1;
			break;
		}
		}
		if(flag == 0 || a[i] == 2)
			printf("Yes\n" , a[i]);
	}
	return 0;
}
