#include<stdio.h>
#include<string.h>
int main()
{
	char str[1001];
	int i, j, count = 0;
	gets(str);
//	printf("%s\n", str);
	
	for( i = 0; i <= strlen(str); i ++ )
	{
		if( str[i] == '6' )
			count ++;
		else
		{
			if( count > 9 )
				printf("27");
			else if( count > 3 )
				printf("9");
			else while( count -- ) printf("6");
			count = 0;
			if( i == strlen(str) ) continue;
				printf("%c", str[i]);
		}
	} 
	return 0;
}
