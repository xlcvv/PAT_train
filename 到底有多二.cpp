#include<stdio.h>
#include<string.h>
int main()
{
	char n[50];
	scanf("%s" , n);
	int i = 0 , j , count = 0 , ou = 1 , kk = 0;//kk 用来辅助判断数字的个数，正数时，kk=0，所以strlen（n）-0,负数时因为第一位是'-'，所以数字个数要减一
	//count 记录 2 的个数，ou =1 奇数， ou=2 偶数 
	double m , fu = 1;//fu=1 正数， fu=1.5 负数 
	if((n[strlen(n) - 1] - '0') % 2 == 0) // 为偶时，ou =2 
	{
		ou = 2;		
	}
	if(n[0] == '-')//为负 ， fu=1.5 
	{
		kk =1;
		fu = 1.5;
		i += 1;
	}
	for(i ; i < strlen(n) ; i++)
	{
			if(n[i] == '2')
			{
				count ++;
				
			}			
	}
	m = ((float(count)/ (strlen(n) - kk)) * fu * ou);
	printf("%.2lf%c" , m*100,'%');
	return 0;
}
