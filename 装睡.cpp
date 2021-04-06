#include<stdio.h>
int main()
{
	int n , i , breath , pulse;
	char name[100];
	scanf("%d" , &n);
	for(i = 0 ; i < n ; i ++)
	{
		scanf("%s %d %d" , name , &breath , &pulse);
		if((breath < 15) || (breath > 20) || (pulse < 50) || (pulse > 70))
			printf("%s\n" , name);
	}
	return 0;
}
