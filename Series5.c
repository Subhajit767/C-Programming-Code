#include<stdio.h>
#include<math.h>
int main(){
	int i,sum=0,n;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		sum=sum+((pow(-1,i)*pow(i,2)));
	}
	printf("The req. sum is %d",1+sum);
	return 0;
}

