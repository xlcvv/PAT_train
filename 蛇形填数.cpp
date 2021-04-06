#include<stdio.h>
#include<string.h> 
int main()
{
	int a[20][20], i, j, number = 1;// i = raw, j = col
	int n;
	scanf("%d", &n);
	memset(a, 0, sizeof(a));
	int total = n*n;
	i = 0; j = n - 1;
	a[0][n - 1] = 1;//给第一个数赋值 
	while( total - 1 > 0 )	
		{
			while( i < n - 1 && !a[i + 1][j] ) { a[++ i][j] = ++ number; total --; }//下 
			while( j > 0 && !a[i][j - 1] ) { a[i][-- j] = ++ number; total --; }//左 
			while( i > 0 && !a[i - 1][j] ) { a[-- i][j] = ++ number; total --; }//上 
			while( j < n - 1 && !a[i][j + 1] ) { a[i][++ j] = ++ number; total --; }//右 
		}
	for( i = 0; i < n; i ++ )
	{	
		for( j = 0; j < n; j ++ )
			printf("%d ", a[i][j]);
		printf("\n");
	}
	 
	return 0;
}
