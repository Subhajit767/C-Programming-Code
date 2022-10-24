#include<stdio.h>
int main(){
	int array[100],i,size;
	printf("Enter the number of elements:");
	scanf("%d",&size);
	printf("The elements are:\n");//take inputs
	for(i=0;i<size;i++)
	scanf("%d",&array[i]);
	int maximum=array[0];
	int min=array[0];
	for(i=0;i<size;i++)
	{
		if(array[i]>maximum)
		maximum=array[i];
		if(array[i]<min)
		min=array[i];
	}
	printf("greatest element is %d\n",maximum);
	printf("smallest element is %d\n",min);
	return 0;
}
