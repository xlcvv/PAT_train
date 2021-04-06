#include<stdio.h>
int main()
{
	int n , i , j;
	char sex;
	float height;
	scanf("%d" , &n);
	for(i = 0 ; i < n ; i ++)
	{
		getchar();
		scanf("%c %f" , &sex , &height);
		if(sex == 'M')
		//	best_h[i] = height / 1.09;
			printf("%.2f\n" , height / 1.09);
	 else if(sex == 'F')
		//	best_h[i] = height / 1.09;
			printf("%.2f\n" , height * 1.09);
	}
	return 0;
}
