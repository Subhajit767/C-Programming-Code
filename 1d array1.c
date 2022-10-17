#include<stdio.h>
int main(){
	int array[100],size,i,sum=0;
	printf("Enter the number of elements:");
	scanf("%d",&size);
	printf("The elements are:");
	for(i=0;i<size;i++)
	scanf("%d",&array[i]);
    for(i=0;i<size;i++)
	sum=sum+array[i]*array[i];
	printf("The sum of the squares is: %d",sum);
	return 0;	
}
