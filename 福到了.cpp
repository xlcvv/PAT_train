#include<stdio.h>
int main()
{
	char a;
	int flag = 0;//��ʶ��������Ĭ���ǲ��õ� 
	int b, i, j;
	char str[100][100];
	scanf("%c %d", &a, &b);
	
	for( i = 0; i < b; i ++ )
	{ 
		getchar(); 
		for( j = 0; j < b; j ++ )
		{ 
			scanf("%c", &str[i][j]); 
		}
	}
	
	for( j = 0; j < b; j ++ )
	{
		for( i = 0; i < b; i ++ )
		{ 
				if( str[j][i] != str[ b - j - 1 ][i] )//������һ����һ�������ǿɵ�
				{
					flag = 1;
					break;
				}
		}
	}
	if( flag == 0)
		printf("bu yong dao le\n");
	for( i = b - 1; i >= 0; i -- )
	{ 
		for( j = b - 1; j >=0; j -- )
		{ 
			if( str[i][j] != ' ' )
				str[i][j] = a;
			printf("%c", str[i][j]);
		} 
		printf("\n");
	} 
	return 0;
}
