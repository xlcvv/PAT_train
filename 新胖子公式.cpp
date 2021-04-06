#include<stdio.h>
#include<math.h>
int main()
{
	double weight, height;
	scanf("%lf%lf", &weight, &height);
	double res;
	res = weight / pow(height, 2);
	printf("%.1lf\n", res);
	if(res > 25)
		printf("PANG");
	else
		printf("Hai Xing");
	return 0; 
}
