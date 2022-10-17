#include<stdio.h>  
int main()  
{    
    int i,j,rows,k,m;  
    printf("Enter the number of rows:");  
    scanf("%d",&rows);     
    for(i=1;i<=rows;i++)  
    {  
        for(j=1;j<=rows-i;j++)
            printf("  ");      
        for(m=i;m>=1;m--)  
            printf("%c ",m+64);     
        for(k=1;k<=i-1;k++)  
            printf("%c ",k+1+64);  
        printf("\n");  
    }  
  return 0;  
}
