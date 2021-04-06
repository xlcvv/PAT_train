#include<stdio.h>
int main()
{
	int y , year;
	int n , count , i , j;
	scanf("%d %d" , &y , &n);
	for(j = y ; j < 4000 ; j++)
	{
		int m[10] = {0};//这个才是初始化，如果前面先定义int m[10];再m[10] = {0}是错误的，这样不仅数组越界，而且也只是给m[10]赋值而已。 
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
