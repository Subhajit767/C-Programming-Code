#include<stdio.h>
int main(){
	int array[20],i,size,sum=0;
	printf("Enter the number of elements :");
	scanf("%d",&size);
	printf("The elements are:\n");//for taking inputs
	for(i=0;i<size;i++)
	scanf("%d",&array[i]);
	for(i=0;i<size;i++)
	{
		if(array[i]%3==0||array[i]%5==0)
		{
			printf("%d is divisible by 3 or 5\n",array[i]);//To check whether The element is divisible by 3 or 5
			sum=array[i]+sum;
			
		}
		if(array[i]%3!=0||array[i]%5!=0)
		printf("%d is not divisible by 3 or 5\n",array[i]);
	}
	printf("The required sum is %d",sum);
	//printf("The code is now full\n");
	return 0;
}
