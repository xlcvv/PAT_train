#include<stdio.h>
int main()
{
	int n , booknum , hour , mini , res , res2 , a[1001] = {0} , time[1001] = {0};
	int total = 0;
	float avanage = 0; 
	int count = 0; 
	char  signal;
	scanf("%d" , &n);
	while(n > 0)
	{
		scanf("%d %c %02d:%02d" , &booknum , &signal , &hour , &mini);
		if(signal == 'S')
		{
			a[booknum] = 1;
			res = hour * 60 + mini;
			time[booknum] = res;
		}
		if(a[booknum] == 1 && signal == 'E')
		{
			count ++;
			res2 = hour * 60 + mini - time[booknum];
			total += res2;
			a[booknum] = 0;//初始化书号借阅信息 
		}
		if(booknum == 0)
		{
			if(count == 0)
				avanage = 0;
			else
				avanage = (total * 1.0) / count;
			printf("%d %.0f\n" , count , avanage); 
			int i = 0;
			while(i < 100)
			{
				a[i] = 0;
				total = 0; // 清空一天所借阅时间	
				i++;
			}
			count = 0; 
			n -- ;
		}
	}
	return 0;
} 
