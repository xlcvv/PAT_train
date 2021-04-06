#include<stdio.h>
int main()
{
	int d,d_2;
	scanf("%d" , &d);
	if((d+2) != 7)
		printf("%d" , (d+2)%7);
	else
		printf("%d" , d+2);
}
