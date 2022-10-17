#include<stdio.h>
int main(){
	int r,s,a;
	for(r=1;r<=10;r++)
	{
		for(s=1;s<=(10-r);s++)
			printf(" ");
		for(a=1;a<=(2*r-1);a++)
			printf("*");
		printf("\n");
	}
	
	for(r=3;r<=10;r++)
	{
		for(s=1;s<=(10-r);s++)
			printf(" ");
		for(a=1;a<=(2*r-1);a++)
			printf("*");
		printf("\n");
	}
	
	for(r=3;r<=10;r++)
	{
		for(s=1;s<=(10-r);s++)
			printf(" ");
		for(a=1;a<=(2*r-1);a++)
			printf("*");
		printf("\n");
	}
	
	for(r=1;r<=7;r++)
	{
		for(s=1;s<=6;s++)
			printf(" ");
		for(a=1;a<=3;a++)
			printf("# ");
		printf("\n");
	}
	return 0;
}
