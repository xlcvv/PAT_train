#include<stdio.h>
int main()
{
	int cost, discount;
	scanf("%d %d", &cost, &discount);
	printf("%.2lf", cost * ( discount * 0.1 ));
	return 0;
}
