#include<stdio.h>
int main()
{
	int NUM1 , NUM2 , RESULT;	
	scanf("%d %d" , &NUM1 , &NUM2);
	if(NUM1 % 10 == 0 && NUM2 % 10 == 0)
		{
			RESULT = NUM1 + NUM2;
		}
	printf("%d + %d = %d", NUM1 , NUM2 , RESULT);
} 
