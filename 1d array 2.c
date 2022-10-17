#include<stdio.h>
int main(){
	int array[10],i,size,sum=0;
	printf("Enter the number of elements:");
	scanf("%d",&size);
	printf("The elements are:\n");
	for(i=0;i<size;i++)
	scanf("%d",&array[i]);
	for(i=0;i<size;i++)
	{
		if(array[i]%3==0||array[i]%5==0)
		{
			printf("%d is divisible by 3 or 5\n",array[i]);
			sum=array[i]+sum;
			
		}
		if(array[i]%3!=0||array[i]%5!=0)
		printf("%d is not divisible by 3 or 5\n",array[i]);
	}
	printf("The required sum is %d",sum);
	return 0;
}
