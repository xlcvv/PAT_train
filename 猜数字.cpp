#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, ave = 0, guessNum[10001];
	double res = 0;
	char name[10001][10];
	scanf("%d", &n);
	for( i = 0; i < n; i ++ )
	{
		scanf("%s", name[i]);
		scanf("%d", &guessNum[i]);
		res += guessNum[i];
	}
	res = res / n;
	res = floor(res / 2);
	printf("%.0lf ", res);
	
	int close = guessNum[0] - res;
	int flag = 0;
	for( i = 1; i < n; i ++ )
	{
		if(( fabs(guessNum[i] - res)) < close )
		{
			flag = i;
			close = fabs(guessNum[i] - res);
		} 
	}
	printf("%s", name[flag]);
	return 0;
}
