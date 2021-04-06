#include<stdio.h>
int main()
{
	int n, left, right;
	char num[10];
	scanf("%d", &n);
	getchar();
	while(n --)
	{
		gets(num);		
		left = ( num[0] - '0') + ( num[1] - '0') + ( num[2] - '0');
		right = ( num[3] - '0') + ( num[4] - '0') + ( num[5] - '0');
		if( left == right )
			printf("You are lucky!\n");
		else
			printf("Wish you good luck.\n");
	}
	return 0;
}
