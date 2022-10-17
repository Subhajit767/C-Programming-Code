#include<stdio.h>
int main()
{
 int num,r,c,z;
 printf("Enter no. of rows : ");
 scanf("%d", &num);
 for(r=1; r<=num; r++)
 {
   for(c=1,z=1; c<=r; c++,z=z+2)
       printf("%d ",z);
   printf("\n");
 }
}
