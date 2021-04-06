#include<stdio.h>
#include<string.h>
int main()
{
	int n , i;
	char signal , a[100000];
	scanf("%d %c" , &n , &signal);
	getchar();
	gets(a);
	if( n > strlen(a))
	{ 
	for(i = 0 ; i < (n - strlen(a)) ; i ++)
	{
		printf("%c" , signal);
	}
	printf("%s" , a);
	}
	else
	{
		for(i = n ; i > 0 ; i --)
		{
			printf("%c" , a[strlen(a)-i]);
		}
	}
	return 0;
}
