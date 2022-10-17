#include<stdio.h>
#include<math.h>
int main(){
	int i,sum=0,n;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(i,2);
	}
	printf("The req. sum is: %d",sum);
	return 0;
}
