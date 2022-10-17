#include<stdio.h>
int main(){
	int c,n,i,array[100],j=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	printf("The unique elements are:");
	for(i=0;i<n;i++)
	{
	c=array[i];
	for(i=1;i<n;i++)
	{
		if(c==array[i])
		{
			c=array[i];
		}
	}
}
	printf("%d",c);
}
