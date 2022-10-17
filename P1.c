#include<stdio.h>
#include<conio.h>
int main(){
	char b;
	printf("Enter your char:");
	scanf("%c",&b);
	{
		if(b>=65&&b<=90)
	{
		printf("Your char is capital");
		
	}
	if(b>=97&&b<=122)
	{
	printf("\nYour char is small");
	
	}
	}
	if(b>=48&&b<=57)
	{
		printf("\nYour char is digit");
	
	}

	if(b>=0&&b<=47||b>=58&&b<=64||b>=91&&b<=96||b>=123&&b<=127)
	{
		printf("\nYour char is special");
	}
	return 0;

}
