#include<stdio.h>
#include<string.h>
int main()
{
	char k[10][10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	int i=0,c=0;
	char b[10000];
	scanf("%s",b);	
		if(b[c]=='-')
	{
		printf("fu ");
		c++;
	}
for(i=c;i<strlen(b);i++) 
{

	if(i!=strlen(b)-1){
	printf("%s ",k[b[i]-'0']);
}
else
printf("%s",k[b[i]-'0']);}
	return 0;
}
/*#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],k[10][10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	int i=0,j,m,c=0;
	int b;
	scanf("%d",&b);	
	if(b<0){
	b=b*(-1);
	printf("fu ") ;
}
	while(b)
	{
		c*=10;
		m=b%10;
		c+=m;
		b/=10;
	}
if(c==0)
{
	printf("ling");
}

else	{
while(c) 
{
	
	m=c%10;
	printf("%s",k[m]);
	
		if(c/10>0)
		printf(" ");
	c/=10;
}}
	return 0;
}*/
