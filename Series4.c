#include<stdio.h>
#include<math.h>
int main(){
	float i,sum=0,n;
	printf("Enter the range:");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/(i*i));
	}
	printf("The req. sum is: %f",sum);
	return 0;
}
