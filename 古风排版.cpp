#include<stdio.h>
#include<string.h>
int main()
{
	int n , i , j , flag = 0 , col , lenth , k = 0;
	scanf("%d" , &n);
	getchar(); 
	char sence[1001] , pnt[101][1001];
	gets(sence);
	lenth = strlen(sence);
//	printf("%s:%d" , sence , lenth);
	col = lenth / n;
	if(lenth % n != 0)
		col ++;
	//printf("%d\n" , col);
	for(i = col - 1 ; i >= 0 ; i --)
	{
		for(j = 0 ; j < n ; j ++)
		{
			if(k < lenth)
				pnt[j][i] = sence[k++];
			else
				pnt[j][i] = ' ';
		}
	}
	//printf("%d" , k);
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < col ; j ++)
			printf("%c" , pnt[i][j]);
		if(i != n-1)
			printf("\n");
	}
	return 0;
}
