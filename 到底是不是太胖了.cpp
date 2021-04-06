#include<stdio.h>
#include<math.h>
double result(int height)
{
	double result;
	result = (height - 100) * 1.8;
	return result;
}
int main()
{
	int n , i , j , flag = 0;
	scanf("%d" , &n);
	double height[20] , weight[20] , wucha , biaozhun;
	for(i = 0 ; i < n ; i ++)
	{
		scanf("%lf %lf" , &height[i] , &weight[i]);
	}
	for(i = 0 ; i < n ; i ++)
	{
		wucha = fabs(weight[i] - result(height[i]));
		biaozhun = result(height[i]);
		if(wucha < (biaozhun * 0.1))
			printf("You are wan mei!\n");
		if(wucha >= (biaozhun * 0.1) && weight[i] > biaozhun)
			printf("You are tai pang le!\n");
		if(wucha >= (biaozhun * 0.1) && weight[i] < biaozhun)
			printf("You are tai shou le!\n");
	}
	return 0;
}
