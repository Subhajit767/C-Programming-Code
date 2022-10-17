#include<stdio.h>
int main(){
	int n,r,sum=0,i;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=n;n!=0;n=n/10)
	{
		r=n%10;
		sum=sum+(r*r*r);
	}
	if(sum==i)
	printf("%d is an Armstrong number.\n",i);
	else
	printf("%d is not an Armstrong number.\n",i);
	return 0;
}
