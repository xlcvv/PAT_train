#include<stdio.h>
int main()
{
    int i,N,str,j,K,count=1;
    scanf("%d %c",&N,&str);
    int M = N-1;
    	for(i=3; ;i+=2)
	{	
		K=i*2;
		if(M>=K)
		{
		M-=K;
		count++;
		}
		else
		{
			break;
		}
	}
	 for (i=count;i>1;i--) 
    {
        for (j=1;j<=count-i;j++) 
            printf(" ");
        for (j=1;j<=2*i-1;j++)
            printf("%c",str);
        printf("\n"); 
    }
    for (i=1;i<=count;i++) 
    {
        for (j=1;j<=count-i;j++) 
            printf(" ");
        for (j=1;j<=2*i-1;j++)
            printf("%c",str);
        printf("\n"); 
    }
    printf("%d",M);
}
