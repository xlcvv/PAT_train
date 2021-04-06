#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,len,k;
	long long int m;
	scanf("%d",&n);

		for(len=11;len>=1;len--)
		{
			for(i=2;i<=sqrt(n);i++)
			{
				m=1;
				for(j=i;j<len+i;j++)
				{
					m*=j;
					if(m>n)
					break;
				}
				if(n%m==0)
				{
					printf("%d\n%d",len,i);
					for(k=i+1;k<j;k++)
					{
					printf("*%d",k);
						//	if(k!=(j-1))
						//	printf("*");
					}
				 	return 0;
				}
			}
		}
		
	printf("1\n%d",n);
	return 0;
						
} 
