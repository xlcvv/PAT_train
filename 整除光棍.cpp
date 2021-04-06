#include<stdio.h>
int main()
{
	int n , count = 0;//计数用的
	int res = 1;
	scanf("%d" , &n); 
	while(res % n == res)//先取第一个能除n的光棍数，因为n<1000，所以这个数还是可以取到的
	{
		count ++;
		res = res * 10 + 1;
	}
//	printf("%d\n" , res); //测有没有取到第一个光棍数用的，便于调试（代码要学会一步一步的调试）
	while(1)
	{
		count ++;
		printf("%d" , res / n);//这里的思想是一位一位的输出，不用数组存
		res = res % n;//取余，做法跟我们小学用笔做除法那样，记不清的建议用手随便写一个除法运算
		if(res == 0)//取余为0跳出循环
			break;
		if(res < n)//如果取余小于n，做添加一位1，这里不用if判断也可以，取余都是小于n的
			res = res * 10 + 1;  
	}
	printf(" %d" , count);
	return 0;
} 
