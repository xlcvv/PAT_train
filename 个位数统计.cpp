#include<stdio.h>
#include<string.h> 
int main(){
	int i,b[100]={0},num,n,m,count=0;
	char N[10000]={0};
	scanf("%s",&N);
	int len = strlen(N);
	for(i=0;i<len;i++)
		{
		num=N[i]-48;
		b[num]+=1;
	}
	for(i=0;i<len;i++)
	{
	if(b[i]!=0){
	printf("%d:%d\n",i,b[i]);
}
}
}
