#include<stdio.h>
#include<string.h>
int main()
{
	int n , flag = 0;
	scanf("%d" , &n);
	char chuzhao[10];
	while(gets(chuzhao))
	{
		if(strcmp(chuzhao,"End") == 0)
			break; 
			if(flag == n)
		{
			printf("%s\n" , chuzhao);
			flag = 0;
			continue; 
		}
		if(strcmp(chuzhao,"Bu") == 0 && flag != n)
			{
			printf("JianDao\n");
		flag ++;	
		}
		if(strcmp(chuzhao,"ChuiZi") == 0 && flag != n)
			{
			printf("Bu\n");
			flag ++;
		}
		if(strcmp(chuzhao,"JianDao") == 0 && flag != n)
		{
			printf("ChuiZi\n");
			flag ++;
		}
	}
	return 0;
}
