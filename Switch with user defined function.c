#include<stdio.h>
#include<math.h>
int addNumbers();
int subNumbers();
int main()
{
	int n1,n2,sum,c,diff;
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	printf("1 for addition:\n");
	printf("2 for substraction:\n");
	printf("Enter your choice:\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		sum= addNumbers(n1,n2);
	    printf("sum= %d",sum);	
		break;
		
		case 2:
			diff= subNumbers(n1,n2);
			printf("diff=%d",diff);
			break;
			
		default:
		printf("Wrong Choice you have entered.");
		break;	
	}
	
	return 0;
}
int addNumbers( int a, int b )
{
	int result;
	result = a+b;
	return result;
}
int subNumbers( int a, int b)
{
	int result;
	result=a-b;
	return result;
}
