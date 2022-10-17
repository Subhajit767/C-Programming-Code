#include<stdio.h>
int rec(long int );
int main()
{
	long int a,fact;
	printf("Enter any number:");
	scanf("%ld",&a);
	fact=rec(a);
	printf("Factorial value= %ld\n",fact);
	return 0;
}
int rec(long int x)
{
	int f;
	if(x==1)
	return(1);
	else
	f=x*rec(x-1);
	return(f);
}
