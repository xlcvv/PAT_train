#include<stdio.h>
#include<string.h>

int iszm(char n)
{
	if( n >= 'a' && n <= 'z')
		return 1;
	if( n >= 'A' && n <= 'Z')
		return 1;
	return 0;
}

int isdigi(char n)
{
	if( n >= '0' && n <= '9')
		return 1;
	return 0;
}

char lowercase(char n)
{
	if( n >= 'A' && n <= 'Z' && n != 'I')
	{
		n = n + 32;
		return n;
	} 
	else
		return n;
}
int main()
{
	int n, i, j;
	char dialogue[1001];
	scanf("%d", &n);
	getchar();
	while( n -- )
	{
		gets(dialogue);
		printf("%s\n", dialogue);
		printf("AI: ");
		for( i = 0; i < strlen(dialogue); i ++ )
//		printf("AI: %s\n", dialogue);
		{
			if( i == 0 && dialogue[i] == ' ')
				i ++;
		    if( (dialogue[i] == 'c' || dialogue[i] == 'C') && dialogue[i + 1] == 'a' && dialogue[i + 2] == 'n' )
			{
				printf("I can");
				for( j = i; j < strlen(dialogue); j ++ )
				{
					if( dialogue[j] == 'y' && dialogue[j + 1] == 'o' && dialogue[j + 2] == 'u')
					{ 
						i = j + 3;
						break;
					} 
				}
			}
			else if( (dialogue[i] == 'c' || dialogue[i] == 'C') && dialogue[i + 1] == 'o' && dialogue[i + 2] == 'u' && dialogue[i + 3] == 'l' && dialogue[i + 4] == 'd' )
			{
				printf("I could");
				for( j = i; j < strlen(dialogue); j ++ )
				{
					if( dialogue[j] == 'y' && dialogue[j + 1] == 'o' && dialogue[j + 2] == 'u')
					{ 
						i = j + 3;
						break;
					} 
				}
			}
				if( dialogue[i] == '?')
				 	printf("!");
				else if( dialogue[i] == 'I' && iszm(dialogue[i - 1]) == 0 && iszm(dialogue[i + 1]) == 0 )
					printf("you");
					
				else if( iszm(dialogue[i - 1]) == 0 && dialogue[i] == 'm' && dialogue[i + 1] == 'e' && iszm(dialogue[i + 2]) == 0 )
				{
					printf("you");
					i ++;
				}
				else if( dialogue[i] == ' ' && iszm(dialogue[i + 1]) == 1 || isdigi(dialogue[i + 1]) == 1)
					printf(" ");
				else if( dialogue[i] != ' ' )
					printf("%c", lowercase(dialogue[i]));			
		}
		printf("\n");
	}
	return 0;
}
