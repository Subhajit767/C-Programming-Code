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
        for(m=i;m>=1;m--)  
            printf("%d",m);     
        for(k=1;k<=i-1;k++)  
            printf("%d",k+1);  
        printf("\n");  
    }  
  return 0;  
}  
