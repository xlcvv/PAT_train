#include<stdio.h>
int main()
{
	int i, j, k;//循环所需参数 
	int row1, column1, row2, column2;//两矩阵的行列 
	int jz1[100][100], jz2[100][100], res[100][100];
	 
	scanf("%d%d", &row1, &column1);
	
	for( i = 0; i < row1; i ++ )
		for( j = 0; j < column1; j ++)
		{
			scanf("%d", &jz1[i][j]);
		}
		
	scanf("%d%d", &row2, &column2);
	
	for( i = 0; i < row2; i ++ )
		for( j = 0; j < column2; j ++)
		{
			scanf("%d", &jz2[i][j]);
		}
	if( column1 != row2 )
	{
		printf("Error: %d != %d", column1, row2);
	}
	else if( column1 == row2 )
	{
		for( i = 0; i < row1; i ++ )
		{
			for( j = 0; j < column2; j ++ )
			{
				for( k = 0; k < row2; k ++ )
					res[i][j] += jz1[i][k] * jz2[k][j];
			}
		}
		printf("%d %d\n", row1, column2);
		for( i = 0; i < row1; i ++ )
		{
			for( j = 0; j < column2; j ++)
			{
				//printf( j == column2 - 1 ? "%d\n" : "%d ", res[i][j]);
				if( j < column2 - 1 )
					printf("%d ", res[i][j]);
				else
					printf("%d", res[i][j]);
//这里刚开始没注意这个每行最后一位元素后面不能有空格，导致我迷茫了很久，这要是比赛不得吃一个大亏 
			}
			printf("\n");
		}
	}
	

	return 0;
} 

