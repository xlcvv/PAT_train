#include<stdio.h>
int main()//�ύ��ʱ���еĵ��Ǵ���ģ�һֱû�з������⣬���ٶ���һ��ѱ��˵���⣬����֣�Too early to Dang�ĺ�������һ��'.'��Ҫ�������Ⱑ�������������� 
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
