#include<stdio.h>
int main(){
	int a,b;
	int i,sum=0,count=0;
	scanf("%d %d",&a,&b);
	for(i=0;i<=(b-a);i++)
	{	
	printf("%5d",a+i);
		count++;
		if(count%5==0&&(a+i)!=b)//Ҫ���ǵ�������һ����������һ����ʱ�����û��� 
		{
		printf("\n");
		}
		sum+=(a+i);
}
	printf("\nSum = %d",sum);
} 

/*
#include<stdio.h>
int main(){
	int a,b;
	int i,sum=0,count=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{	
	printf("%5d",i);
		count++;
		if(count%5==0&&i!=b)//Ҫ���ǵ�������һ����������һ����ʱ�����û��� 
		{
		printf("\n");
		}
		sum+=i;
}
	printf("\nSum = %d",sum);
} 
*/
