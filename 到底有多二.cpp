#include<stdio.h>
#include<string.h>
int main()
{
	char n[50];
	scanf("%s" , n);
	int i = 0 , j , count = 0 , ou = 1 , kk = 0;//kk ���������ж����ֵĸ���������ʱ��kk=0������strlen��n��-0,����ʱ��Ϊ��һλ��'-'���������ָ���Ҫ��һ
	//count ��¼ 2 �ĸ�����ou =1 ������ ou=2 ż�� 
	double m , fu = 1;//fu=1 ������ fu=1.5 ���� 
	if((n[strlen(n) - 1] - '0') % 2 == 0) // Ϊżʱ��ou =2 
	{
		ou = 2;		
	}
	if(n[0] == '-')//Ϊ�� �� fu=1.5 
	{
		kk =1;
		fu = 1.5;
		i += 1;
	}
	for(i ; i < strlen(n) ; i++)
	{
			if(n[i] == '2')
			{
				count ++;
				
			}			
	}
	m = ((float(count)/ (strlen(n) - kk)) * fu * ou);
	printf("%.2lf%c" , m*100,'%');
	return 0;
}
