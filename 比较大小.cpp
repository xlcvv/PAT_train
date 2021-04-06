#include<stdio.h>
int main()
{
	int a[3],i,j,temp;
	for( i=0 ; i<3 ; i++ )
		scanf("%d", &a[i]);
	for(i=0; i<3; i++)
		for(j=0; j<3-i; j++)
			if(a[i] > a[i+j])
			{
				temp = a[i];
				a[i] = a[i+j];
				a[i+j] = temp;
			}
	for( i=0 ; i<3 ; i++ )
	{
		printf("%d", a[i]); 
			if(i != 2)
				printf("->");
	}
}

