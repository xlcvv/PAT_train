#include<stdio.h>
int main()
{

int num , count = 1;
while(scanf("%d" , &num))	
{
	if(num == 250)
		break;
	count ++;
}
printf("%d" , count); 
return 0;
} 
