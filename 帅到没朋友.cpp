#include<stdio.h>
int main()
{
	int n , i , j , k[101] , checknum , check[1000] , z , shuaibi[1000] , youwu = 0;
	int kk[101][1000] , bsf ,huanhang = 0; 
	scanf("%d" , &n);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d " , &k[i]);
		if(k[i] <= 1)
		continue; 
		for(j = 0 ; j < k[i] ; j++)
		{
			scanf("%d" , &kk[i][j]);
		} 
	}
	scanf("%d" , &checknum);
	for(i = 0 ; i < checknum ; i++)
	{
		scanf("%d" , &check[i]);
	}
	for(z = 0 ; z < checknum ; z++)
	{
		bsf = 0;
		for(i = 0 ; i < n ; i++)
		{
			for(j = 0 ; j < k[i] ; j++)
			{
				if(check[z] == kk[i][j])
					bsf ++;
			}
			if(bsf == 0 && i == n-1)
			{	
				youwu ++;
				shuaibi[z] = check[z];
			}
		}
	}
	for(i = 0 ; i < checknum ; i++)
	{
		for(j = i+1 ; j < checknum ; j++)
		{
			if(shuaibi[i] == shuaibi[j]) //&& j == checknum - 1
			{
				shuaibi[j] = 0;
			}
		}
		if(shuaibi[i] != 0)
		{
			huanhang ++;
			printf("%d" , shuaibi[i]);
			if(huanhang != youwu-1)
				printf(" ");
		}
	}
	if(youwu == 0 )
	{
		printf("No one is handsome");
	}
}

