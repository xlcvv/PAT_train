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
//   //�����������  
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
 
	int M , N;//M������N����
	scanf("%d %d" , &M , &N);
	int search_M , search_N;//Ҫ���ҵ�M��N�е���
	scanf("%d %d" , &search_M , &search_N); 
	int matrix[M][N] = { 0 };
	int row = 0;
	int col =   0;
	int start = 1; //��ʼֵ
 
 
 
	int m =M;
	int n = N;
	//���Ի�N/2��Ȧ
	for (int count = 0; count < N / 2; count++)  
	{
		for (; col < n - 1; col++) //a�Ÿ�ֵ
		{
			matrix[row][col] = start++;
		}
		for (; row < m - 1; row++) //b�Ÿ�ֵ
		{
			matrix[row][col] = start++;
		}
		for (col = n - 1; col > count; col--) //c�Ÿ�ֵ
		{
			matrix[row][col] = start++;
		}
		for (row = m- 1; row > count; row--) //d�Ÿ�ֵ
		{
			matrix[row][col] = start++;
		}
		//������һȦ
		m--;
		n--;
		row++;
		start--; //��������Ϊ�ڻ�Ȧ��ʱ�����1
	}
	if (N % 2 != 0) //���sizeΪ����������м���һ�����������������ﲹ��
	{
		int  z = M - 2 *row;
		for(int i=0  ;  i< z   ;++i)
		matrix[row++][col + 1] = ++ start ;
	}
 
	//�������
	printf("%d" , matrix[search_M-1][search_N-1]); 
 
	return 0;
}
 
