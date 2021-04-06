#include<stdio.h>
#include<string.h>
int main()
{
	char PHONE_NUM[100] , get_num[100] , temp;
	int i , j , count = 0 , flag = 1 ;
	gets(PHONE_NUM);
	int lenth1= strlen(PHONE_NUM);
	get_num[0] = PHONE_NUM[0];
	for( i = 1 ; i < lenth1 ; i++)
		{
			count = 0;
		for( j = 0 ; get_num[j] != '\0' ;)
			{
			if(get_num[j] == PHONE_NUM[i])
			{	
				count = 1;
			}
			j ++;
			}
			if(count == 0)
			{
			get_num[j] = PHONE_NUM[i];
			flag ++;
			}
		}
	for (i = 0 ; i < flag ; i++)
		{
            for (j = 0 ; j < flag - i - 1 ; j++) 
			{
                if ((get_num[j]) < (get_num[j + 1])) 
				{
                    temp = get_num[j];
                    get_num[j] = get_num[j + 1];
                    get_num[j + 1] = temp;
            	}
        	}
        }
    printf("int[] arr = new int[]{");
    for(i = 0 ; i < flag ; i ++)
	{
		printf("%c" , get_num[i]);// 8 3 2 1 0      18013820100
		if(i == flag - 1)
		{
			printf("};");
		}
		else
		{
			printf(",");
		}
	}
	printf("\nint[] index = new int[]{");
	for(i = 0 ; i < lenth1 ; i++)
		for(j = 0 ; j < flag ; j++)
			if(PHONE_NUM[i] == get_num[j])
			{
				printf("%d", j);
				if(i == lenth1 -1 )
				{
					printf("};");
				}
				else
				{
					printf(",");
				}
			}
	return 0;
}
