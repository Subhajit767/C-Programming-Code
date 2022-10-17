#include<stdio.h>
#include<conio.h>
void fun(int,int,int);
int main(){
	int x,y,z;
	printf("Enter the values x,y,z:\n");
	scanf("%d%d%d",&x,&y,&z);
	printf("\nValues of x,y &z as entered");
	printf("\nx=%d \ty=%d \tz=%d",x,y,z);
	fun(x,y,z);
	printf("\n\n\nPress any key to exit.....");
	return 0;
}
void fun(int x,int y, int z)
{
	int i,t;
	for(i=0;i<=2;i++)
	{
		t=z;
		z=y;
		y=x;
		x=t;
		printf("\n\n After right shifting of values %d time(s):\n",i+1);
		printf("x=%d\t y=%d\t z=%d",x,y,z);
	}
}
