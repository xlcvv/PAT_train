#include<stdio.h>//用数组来计数，把特性标签当作下标，例如有233，就a[233] += 1 
int main()
{
	int n , i , j , n2 , m[10000] = {0};
	int a[1001][100] , max , flag;
	scanf("%d" , &n);
	
	for(i = 0 ; i < n ; i ++)
	{
		scanf("%d" , &n2);
		for(j = 0 ; j < n2 ; j ++)
			{
			scanf("%d" , &a[i][j]);
			m[a[i][j]] ++;
			}
	}
	max = m[1000];
	flag = 1000;//   提交的时候有个结果是错误的， 是因为这里flag，也就是下标（特性标签）当m[1000]时，1000的下标没有存储，导致后面输不出，因为flag的赋值是由if控制的 
	for(i = 1000 ; i > 0 ; i --)
	{
		if(max < m[i])
		{
			max = m[i];
			flag = i;
		}
	}
	printf("%d %d" , flag , max);
	return 0;
}
