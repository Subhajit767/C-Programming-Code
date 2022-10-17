#include<stdio.h>
#include<math.h>
int main(){
	int i,num,sum=0;
	printf("Enter the range of last number:");
	scanf("%d",&num);
	for(i=1;i<=num;i=i+2)
	{
	sum=sum+i;
	}
	printf("Sum of odd numbers is %d",sum);
	return 0;
}
