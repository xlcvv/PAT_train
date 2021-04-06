#include<stdio.h>
int main()
{
	int n;
	char m;
	scanf("%d %c" , &n , &m);
	int i , j;
	for(i = 1 ; i<=n ; i++)
		if(i%2 != 0)
		{
			for(j = 0 ; j<n ; j++)
				printf("%c" , m); 
		}
		else
			if(i != n)
				printf("\n");
}
