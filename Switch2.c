#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d %d",&a,&b);
	printf("1 for addition\n");
	printf("2 for substraction\n");
	printf("3 for multiplication\n");
	printf("4 for division\n");
	printf("Enter your choice:");
	int c;
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		{
				printf("The addition of a and b is %d",a+b);
				break;
		}
		case 2:
			{
				printf("The substraction of a and b is %d",a-b);
				break;
			}
			case 3:
				{
					printf("The multiplication of a and b is %d",a*b);
				break;
				}
				case 4:
					{
						printf("The division of a and b is %d",a/b);
						break;
					}
					default:
						{
							printf("The entered case number you have entered is incorrect.");
							break;
						}
	}
	return 0;
}
