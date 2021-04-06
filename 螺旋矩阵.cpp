//#include <stdio.h> 
//#include <stdlib.h> 
//int main() 
//{ 
//  int N,i,j,n,num=1; 
//  int a[10][10]={0}; 
//  scanf("%d",&N,&M); 
//    
//   for(n=0;n<=N/2;n++) 
//   { 
//     for(j=n;j<=N-n-1;j++) 
//     a[n][j]=num++; 
//       
////     for(i=n+1;i<N-n-1;i++) 
//     a[i][N-n-1]=num++; 
//       
//     for(j=N-n-1;j>n;j--) 
//     a[N-n-1][j]=num++; 
//       
//     for(i=N-n-1;i>n;i--) 
//     a[i][n]=num++; 
//   }   
//   //输出螺旋矩阵  
//   for(i=0;i<N;i++) 
//   { 
//     for(j=0;j<N;j++) 
//     printf("%2d ",a[i][j]); 
//     
//     printf("\n"); 
//   }   
//     
//   system("pause"); 
//   return 0; 
//}

#include<stdio.h>
int main()
{
 
	int M , N;//M行数，N列数
	scanf("%d %d" , &M , &N);
	int search_M , search_N;//要查找的M行N列的数
	scanf("%d %d" , &search_M , &search_N); 
	int matrix[M][N] = { 0 };
	int row = 0;
	int col =   0;
	int start = 1; //起始值
 
 
 
	int m =M;
	int n = N;
	//可以画N/2个圈
	for (int count = 0; count < N / 2; count++)  
	{
		for (; col < n - 1; col++) //a排赋值
		{
			matrix[row][col] = start++;
		}
		for (; row < m - 1; row++) //b排赋值
		{
			matrix[row][col] = start++;
		}
		for (col = n - 1; col > count; col--) //c排赋值
		{
			matrix[row][col] = start++;
		}
		for (row = m- 1; row > count; row--) //d排赋值
		{
			matrix[row][col] = start++;
		}
		//进入下一圈
		m--;
		n--;
		row++;
		start--; //这里是因为在换圈的时候会多加1
	}
	if (N % 2 != 0) //如果size为奇数则最后中间那一个数遍历不到，这里补上
	{
		int  z = M - 2 *row;
		for(int i=0  ;  i< z   ;++i)
		matrix[row++][col + 1] = ++ start ;
	}
 
	//输出数组
	printf("%d" , matrix[search_M-1][search_N-1]); 
 
	return 0;
}
 
