#include<stdio.h>
#include<string.h>
int main()
{
	char a[10001] , b[10001] , c[10000] ;
	int i,j;
 	gets(a);
 	gets(b);
	for(i=0;a[i]!='\0';i++)
		{
		for(j=0;j<strlen(b);j++)
			{
			if( a[i] == b[j] )
				break;
			if(j == strlen(b)-1)//-1����Ϊ�� j ��ѭ���ڣ�j==strlen(b)ʱ���ǲ���ִ��������ģ�����Ҫ-1 
				{
				
					printf("%c",a[i]);
				}
			}
		}
		printf("\n");
		return 0;
}
/*#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i,j;
    char a[10001],b[10001];
    gets(a);
    gets(b);
    int l=strlen(b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;j<strlen(b);j++)
            if(a[i]==b[j]) break;
        if(j==strlen(b))
            printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}*/ 
/*
#include<stdio.h>
#include<string.h>
int main(){
	char a[100000],b[100000];
	gets(a);
	gets(b);
	for(int i=0;i<strlen(a);i++)
	{
		if(strchr(b,a[i]))
			continue;
		else 
			printf("%c",a[i]);
	}
	return 0;
}
*/
