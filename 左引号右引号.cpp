#include<stdio.h>
int main()
{
	int c, q = 1;
	while( ( c = getchar() )!= '\n' )
	{
		if( c == '"' ) { printf("%s", q ? "``" : "''"); q = !q; }
		else
			printf("%c", c); 
	}
	return 0;	
}
