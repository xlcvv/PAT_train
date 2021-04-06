#include<stdio.h>
int main(){
	int n,i,j,m,b[1000],c[1000],d;
	char a[1000][100]; //之前用a[100][100]不行是因为，题目的测试数据超过100个考生，导致数组空间不够，段错误 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		scanf("%s %d %d",a[i],&b[i],&c[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&d);
	
	
	for(j=0;j<n;j++){ 
	if(d == b[j])
	{
		printf("%s %d\n",a[j],c[j]);
	}
	}} 
} 
