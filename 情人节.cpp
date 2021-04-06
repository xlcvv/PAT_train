#include<stdio.h>
int main()
{
	char id[100][20];
	int i = 0 , count = 0;
	while(1 == 1)
	{
		scanf("%s" , id[i]);
		if(id[i][0] == '.')
			break;
		i ++;
		count ++;	
	}
	
	if(count < 2)
	{
		printf("Momo... No one is for you ...");
	}
	else
	{
		if(count < 14)
		{
			printf("%s is the only one for you..." , id[1]);
		}
		else
		{
			printf("%s and %s are inviting you to dinner..." , id[1] , id[13]);
		}
	}
	return 0;
}
