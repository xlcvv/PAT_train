#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	scanf("%s" , a);
	int g = 0 , p = 1 , l = 2 ,t = 3 , i , j , m[3] = {0} , mm;
	for(i = 0 ; i < a[i] !='\0' ; i ++)
	{
		if(a[i] == 'g' || a[i] == 'G')
			 m[g] ++;
		if(a[i] == 'p' || a[i] == 'P')
			 m[p] ++;
		if(a[i] == 'l' || a[i] == 'L')
			 m[l] ++;
		if(a[i] == 't' || a[i] == 'T')
			 m[t] ++;
	}
	mm = m[0]; 
	for(i = 0 ; i < 4 ; i ++)          //这代码超时！下面注释才是对的 
	{
		if(m[i] < m[i+1])
			mm = m[i+1];
	} 
	for(i = 0 ; i < mm ; i ++)           //把上面的循环闪掉，  i<100000000，答案也正确，不超时 
	{
		if(m[0] != 0 )
		{
			printf("G");
			m[0] --;
		}
		if(m[1] != 0 )
		{
			printf("P");
			m[1] --;
		}
		if(m[2] != 0 )
		{
			printf("L");
			m[2] --;
		}
		if(m[3] != 0 )
		{
			printf("T");
			m[3] --;
		}
	}
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	scanf("%s" , a);
	int g = 0 , p = 1 , l = 2 ,t = 3 , i , j , m[4] = {0} , mm;
	for(i = 0 ; i < strlen(a) ; i ++)
	{
		if(a[i] == 'g' || a[i] == 'G')
			 m[g] ++;
		if(a[i] == 'p' || a[i] == 'P')
			 m[p] ++;
		if(a[i] == 'l' || a[i] == 'L')
			 m[l] ++;
		if(a[i] == 't' || a[i] == 'T')
			 m[t] ++;
	}
	while(m[0] > 0 || m[1] > 0 || m[2] > 0 || m[3] > 0)
	{
		if(m[0] != 0 )
		{
			printf("G");
			m[0] --;
		}
		if(m[1] != 0 )
		{
			printf("P");
			m[1] --;
		}
		if(m[2] != 0 )
		{
			printf("L");
			m[2] --;
		}
		if(m[3] != 0 )
		{
			printf("T");
			m[3] --;
		}
	}
}
*/
