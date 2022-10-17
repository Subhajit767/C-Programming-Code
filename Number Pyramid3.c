#include<stdio.h>  
int main()  
{    
    int i,j,rows,k,m;  
    printf("Enter the number of rows:");  
    scanf("%d",&rows);     
    for(i=1;i<=rows;i++)  
    {  
        for(j=1;j<=rows-i;j++)
            printf(" ");      
        for(k=1;k<=i;k++)  
            printf("%d",k);     
        for(m=i-1;m>=1;m--)  
            printf("%d",m);  
        printf("\n");  
    }  
  return 0;  
}  
