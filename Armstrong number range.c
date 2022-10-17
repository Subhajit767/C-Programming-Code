#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
   int b,i,a,s;
   printf("The Armstrong Number between 1 and 500 is:\n");
   for(i=1;i<=500;i++)
   {
   	b=i;
   	s=0;
   	while(b>0)
   	   {
   		a=b%10;
   		b=b/10;
   		s=s+pow(a,3);	
	   }
	if(s==i)
	printf("%d is an Armstrong Number.\n",i);      
   }
   return 0;
}
