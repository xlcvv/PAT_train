#include<stdio.h>
int main()
{
	int n, sex, weight, height;
	scanf("%d", &n);
	while(n --)
	{
		scanf("%d %d %d", &sex, &height, &weight);
		if( sex == 1 )
		{
			if( height < 130 )
				printf("duo chi yu! ");
			else if( height > 130 )
				printf("ni li hai! ");
			else
				printf("wan mei! "); 
			if( weight < 27 )
				printf("duo chi rou!");
			else if( weight > 27 )
				printf("shao chi rou!");
			else
				printf("wan mei!");
			printf("\n");
		}
		else
		{
			if( height < 129 )
				printf("duo chi yu! ");
			else if( height > 129 )
				printf("ni li hai! ");
			else
				printf("wan mei! ");
			if( weight < 25 )
				printf("duo chi rou!");
			else if( weight > 25 )
				printf("shao chi rou!");
			else
				printf("wan mei!");
			printf("\n");
		}
	}
	return 0;
}
