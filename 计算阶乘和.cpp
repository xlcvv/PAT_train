#include<stdio.h>
int func(int n)
{
	int sum = 1;
	for ( int i = n; i>0; i--)
		{
			sum *= i ;
		}
	return sum;
}

int main()
{
	int N;
	scanf("%d" , &N);
	int sum;
	for( int i = 1 ; i<=N ; i++ )
		sum += func(i);
	printf("%d" , sum);
}
