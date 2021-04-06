#include<stdio.h>
int main()
{
	int n , i , j , sum , yushu , m , count = 0 , shuzi;
	scanf("%d" , &n);
	char id[n][20];
	int a[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2}; 
	char b[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
	for(i = 0 ; i < n;i++)
	scanf("%s" , id[i]);
	for(i = 0 ; i < n ; i++)
		{
			sum = 0;
			shuzi = 0;
		for(j = 0 ; j < 17 ; j++)	
			{
			m = id[i][j]-'0';
			if(m<'0'&&m>'9')
			{
				shuzi ++;
			}
			m *= a[j];
			sum += m;
			}
			yushu = sum % 11;
			if((id[i][17]) != b[yushu] || shuzi != 0 )
			{
				count ++;
				printf("%s\n",id[i]);
			}
		}	
	if(count == 0)
	{
		printf("All passed");
	}
}

/**********以下代码扣分原因：校验码定义为int型， 在if((id[i][17]-'0') != b[yushu] || shuzi != 0)下,结尾为‘X’的正确身份证号也会被判断为错误的身份证号 
#include<stdio.h>
int main()
{
	int n , i , j , sum , yushu , m , count = 0 , shuzi;
	scanf("%d" , &n);
	char id[n][20];
	int a[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2}; 
	int b[11] = {1,0,'X',9,8,7,6,5,4,3,2};
	for(i = 0 ; i < n;i++)
	scanf("%s" , id[i]);
	for(i = 0 ; i < n ; i++)
		{
			sum = 0;
			shuzi = 0;
		for(j = 0 ; j < 17 ; j++)	
			{
			m = id[i][j]-'0';
			if(m<'0'&&m>'9')
			{
				shuzi ++;
			}
			m *= a[j];
			sum += m;
			}
			yushu = sum % 11;
			
\\\\\\\\\\\\\\\\\\\\\\\\之前答案有瑕疵的代码：\\\\\\\\\\\\\\\ 
			if((id[i][17]-'0') != b[yushu] || shuzi != 0)
			{
			count ++;
				printf("%s\n",id[i]);
			} 
/////////////////////改后的代码：//////////////////////////////////////////// 
			if((id[i][17]-'0') != b[yushu] && id[i][17] != 'X' || shuzi != 0)
			{
				count ++;
				printf("%s\n",id[i]);
			}
			if(id[i][17] == 'X' && id[i][17] != b[yushu]|| shuzi != 0)
			{
				count ++;
				printf("%s\n",id[i]);
			}
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
		}	
	if(count == 0)
	{
		printf("All passed");
	}
}*/
