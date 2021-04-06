#include<stdio.h>
int main()
{
	int n , i , m , jscount = 0 , oscount = 0;
	scanf("%d" , &n);
	for(i = 0 ; i < n ; i ++)
	{
		scanf("%d" , &m);
		if(m % 2 == 0)
		{
			oscount ++;
		}
		else
			jscount ++;
	}
	printf("%d %d" , jscount , oscount);
}
