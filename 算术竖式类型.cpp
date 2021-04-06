#include<stdio.h>
#include<string.h>
int main()
{
	char s[10], buf[100];
	int i, j;
	scanf("%s", s);
	for( i = 100; i < 1000; i++ )
		for( j = 10; j < 100; j++ )
		{
			int x1 = i, y1 = j, x2 = i * (j % 10), y2 = i * (j / 10), res = i * j;
			
			sprintf(buf, "%d%d%d%d%d", x1, y1, x2, y2, res);
			bool flag = true;
			for( int k = 0; k < strlen(buf); k++ )
			{
				if( !strchr(s, buf[k]) )
				{
					flag = false; 
					break;
				}
			}
			if(flag)
			{
				printf("%5d\n*%4d\n----------\n%5d\n%4d\n----------\n%5d\n", x1, y1, x2, y2, res);
				break;
			}
		}
//	printf("%d\n", strlen(buf));
//	printf("%s", buf);
	return 0;
}
