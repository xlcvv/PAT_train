#include<stdio.h>
#include<math.h>
int main()
{
	int n, k, m, num[100];
	int i;
	scanf("%d%d%d", &n, &k, &m);
	for( i = 0; i < n; i ++ ){
		num[i] = i + 1;
	}
	for( i = 0; i < n; i ++ ){
		printf("%d ", num[i]);
	}
	printf("\n");
	int j =  k - 1;
	int j1 = n - 1;
	int count = n;
//	printf("%d", num[9 - abs(1-2)]);
	while( 1 ){
		
		
		if( num[(j) % n] == 0 )
			j ++;
		else{ 
			printf("A=%d ", num[(j) % n], j % 10);
			j = j + k;
			num[(j + k - 1) % n] = 0;
			count --;
		}
		if( j1 - m + 1 >= 0 ){
			if( num[j1 - m + 1] == 0 )
				j1 --;
			else{
				printf("B=%d j1=%d ", num[j1 - m + 1], j1 - m + 1);
				num[j1 - m + 1] = 0;
				count --;
			}
		}
		else{
			if( num[9 - abs(j1 - m + 1)] == 0 )
				j1 --;
			else{
				printf("B=%d j1=%d ", num[n - 1 - abs(j1 - m + 1)], n - 1 - abs(j1 - m + 1));
				num[n - 1 - abs(j1 - m + 1)] = 0;
				count --;
			}
		} 
		printf(",");
		if( count == 0 )
			break;
	}
	return 0;
}
