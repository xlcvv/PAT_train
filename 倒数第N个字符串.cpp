#include<stdio.h>
#include<math.h>
int main()
{
	int n, m, i;
	char res[100];
	int reverse_m;
	scanf("%d %d", &n, &m);
	reverse_m = pow( 26, n ) - m; // 把倒数变成整数，aaa为第0个开始 
	while( n > 0 )
	{
		res[i++] = reverse_m % 26 + 'a';
		reverse_m /= 26; 
		n--;
	}
	
	for( i = i - 1; i >= 0; i -- )
		printf("%c", res[i]);
	return 0; 
}
