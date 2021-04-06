#include<stdio.h>  
int main()  
{  
    int k;  
    int a[21][21];  
    long sum = 0;  
    scanf("%d" , &k);  
    for(int i = 2; i <= k; i++){  
        a[i][i] = 2;  
        a[i][2] = i*(i-1);  
        for(int j = 3; j < i; j++){  
            a[i][j] = a[i-1][j]+a[i-1][j-1];  
        	printf("%d\n" , a[i][j]);
		}  
    }  
    for(int i = 2; i <= k; i++){  
        sum += a[k][i];  
    }  
    printf("%d" , sum);
    return 0;     
}   
