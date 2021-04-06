#include<stdio.h>
int main()//提交的时候有的点是错误的，一直没有发现问题，还百度了一大堆别人的题解，最后发现，Too early to Dang的后面少了一个'.'，要认真审题啊！！！！！！！ 
{
	int hh , mm;
	int n = 0 , i, j;
	scanf("%d:%d" , &hh , &mm);
	if(hh >= 12 && hh < 24)
	{
		n = hh - 12;
		if(mm > 0)
		{
			n ++;
		}
	}
	if((hh == 12 && mm == 0) || hh < 12 || hh == 24)
	{
		printf("Only %02d:%02d.  Too early to Dang." , hh , mm);
	}
	for(i = 0 ; i < n ; i++)
	{
		printf("Dang");
	}
}
