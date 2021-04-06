#include<stdio.h>
int main()
{
	int num , i , j , sex[50] , flag , shifsc[50] = {0};
	char name[50][50];
	scanf("%d" , &num);
	for(i = 0 ; i < num ; i++)
	{
		scanf("%d" , &sex[i]);
		scanf("%s" , name[i]);
	}	
		for( i = 0 ; i < num/2 ; i ++)
		{
			for(j = num - 1 ; j > num/2 ; j --)
			{
				if(sex[i] != sex[j] && shifsc[j] == 0)
				{
					flag = 0;
					shifsc[i] = 1;
					shifsc[j] = 1;
					break;
				}
			}
			if(flag == 0);
			printf("%s %s\n" , name[i] , name[j]);
		}
	return 0;
}
