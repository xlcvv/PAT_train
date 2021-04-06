#include<stdio.h>
int main()
{
	int H;
	double result; 
	scanf("%d" , &H);
	result = (H - 100) * 1.8;
	printf("%.1lf" , result);
	return 0;
}
