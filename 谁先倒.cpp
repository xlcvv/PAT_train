#include<stdio.h>
int main() //���Ե�ʱ�������Ϊû��������⣬����A����Ϊ1����ָ���Ժ�һ�������������͵��ˡ� 
{
	int ajl , bjl , acount = 0 , bcount = 0 , adao = 0 , bdao;
	scanf("%d %d" , &ajl , &bjl);
	int n;
	scanf("%d" , &n);
	int ahan , ahua , bhan , bhua , sum;
	while(n > 0)
	{
		sum = 0;
		scanf("%d %d %d %d" , &ahan , &ahua , &bhan , &bhua);
		sum = ahan + bhan;
		if(ahua == sum && (ahua != bhua))
		{
			acount ++;
			if(acount > ajl)
			{	
				printf("A\n");
				printf("%d" , bcount);
				break; 
			}
		}
		if(bhua == sum && (ahua != bhua))
		{
			bcount ++;
			if(bcount > bjl)
			{
				printf("B\n");
				printf("%d" , acount);
				break;
			}
		}
		n --;
	}
}
