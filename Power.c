#include<stdio.h>

int main(){
	int a,b,i,p=1;
printf("Enter base:");
scanf("%d",&a);
printf("Enter exponent");
scanf("%d",&b);
for(i=1;i<=b;i++)
{
	p=p*a;
	
}
printf("%d",p);
	
}
