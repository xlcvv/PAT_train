#include<stdio.h>
#include<stdlib.h>
#include<float.h>
int main()
{
	printf("%d\n", ~(unsigned int)0 / 2);
	printf("%d %d\n", INT_MAX, INT_MIN);
	printf("%.3e %.3e\n", FLT_MAX, FLT_MIN);
	printf("%.3e %.3e", DBL_MAX, DBL_MIN);

	return 0;
}
