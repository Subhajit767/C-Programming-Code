#include<stdio.h>
#include<math.h>
int main(){
	int x,n;
	printf("Enter the value of x:\n");
	scanf("%d",&x);
	printf("1 for 1+x^2\n");
	printf("2 for 1+x/n\n");
	printf("3 for 1+2x\n");
	printf("Enter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("The value is: %d",1+pow(x,2));
			break;
			
		case 2:
		printf("The value is: %d",(1+x/n));
		break;
		
		case 3:
		printf("The value is: %d",1+2*x);
		break;
		
		default:
		printf("The value is: %d",1+n*x);
		break;	
	}
	return 0;
}
