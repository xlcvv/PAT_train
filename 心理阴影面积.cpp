#include<stdio.h>
int main()
{
	int x, y, s1, s2, s3;
	scanf("%d%d", &x, &y);
	s1 = x * y / 2;
	s2 = (100 - x) * (100 - y) / 2;
	s3 = (100 - x) * y;
	printf("%d", 100 * 100 / 2 - s1 - s2 - s3);
	return 0;
}
