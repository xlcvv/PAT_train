#include<stdio.h>
int main()
{
	int y , year;
	int n , count , i , j;
	scanf("%d %d" , &y , &n);
	for(j = y ; j < 4000 ; j++)
	{
		int m[10] = {0};//������ǳ�ʼ�������ǰ���ȶ���int m[10];��m[10] = {0}�Ǵ���ģ�������������Խ�磬����Ҳֻ�Ǹ�m[10]��ֵ���ѡ� 
		count = 0;
		year = j ;
	for(i = 0 ; i < 4 ; i ++)
	{
		m[year % 10] ++;
		year /= 10;
	}
	for(i = 0 ; i < 10 ; i ++)
	{
		if(m[i] != 0)
			count ++;
	}
	if(count == n)
		break;
	}
	printf("%d %04d" , j - y , j);
	return 0; 
}
