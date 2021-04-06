#include<stdio.h>
int main()
{
	int A , B ;
	double RESULT;
	scanf("%d%d" , &A , &B);
	RESULT = (A * 1.0) / B;
	if(B == 0)
	{
		printf("%d/%d=Error" , A , B);
	}
	else
	{
		if(B < 0)
		{
			printf("%d/(%d)=%.2lf" , A , B , RESULT);
		}
		else
		{
			printf("%d/%d=%.2lf" , A , B , RESULT);
		}
	}
	
	return 0;
}
