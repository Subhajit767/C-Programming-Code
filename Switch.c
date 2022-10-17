#include<stdio.h>
int main(){
	int v1,v2,c,a,s,m,d;
	printf("Enter the value 1:");
	scanf("%d",&v1);
	printf("Enter the value 2:");
	scanf("%d",&v2);
	printf("1 for add\n");
	printf("2 for sub\n");
	printf("3 for mul\n");
	printf("4 for div\n");
	printf("Enter the choice");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
				a=v1+v2;
				printf("The add is%d",a);
				break;
			}
		case 2:
		{
			s=v1-v2;
			printf("The sub is%d",s);
			break;
			}	
		case 3:
		{
			m=v1*v2;
			printf("The mul is%d",m);
			break;
			}		
		case 4:
		{
			d=v1/v2;
			printf("The div is%d",d);
			break;
			}	
			
		default:
		{
			printf("Wrong answer");
			break;
				}
				return 0;		
	}
}
