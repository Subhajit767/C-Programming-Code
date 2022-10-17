#include<stdio.h>
#include<conio.h>
void function1();
void function2();
#pragma startup function1
#pragma exit function2
int main()
{
	printf("Inside main function");
	return 0;
}
void function1()
{
	clrscr();
	printf("Inside function1");
}
void function2()
{
	printf("Inside function2");
	getch();
}
