#include<stdio.h>//�������������������Ա�ǩ�����±꣬������233����a[233] += 1 
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
	flag = 1000;//   �ύ��ʱ���и�����Ǵ���ģ� ����Ϊ����flag��Ҳ�����±꣨���Ա�ǩ����m[1000]ʱ��1000���±�û�д洢�����º����䲻������Ϊflag�ĸ�ֵ����if���Ƶ� 
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
