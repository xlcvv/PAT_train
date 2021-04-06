#include<stdio.h>
#include<string.h>
int main()
{
	char num[1000];
	int lenth , i = 0;
	gets(num);
	lenth = strlen(num);
	while(lenth > 0)
	{
		
	if(num[i] + 3 <= 'z')
		{
		printf("%c" , num[i]+3);
		i ++;
		lenth --;
	}
	if(num[i] + 3 > 'z')
	{
		printf("%c" , num[i]+3-'z'+'a'-1);
		i ++;
		lenth --;
	}
	}
	return 0;
} 
