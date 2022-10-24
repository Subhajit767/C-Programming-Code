#include<stdio.h>
int main(){
	float l,b,p,a;
	printf("Enter the length:");//input length
	scanf("%f",&l);
	printf("\n Enter the breadth:");//input breadth
	scanf("%f",&b);
	a=l*b;
	p=2*(l+b);
	printf("\nArea of Rectangle is: %f",a);
	printf("\nPerimeter of rectangle is: %f",p);
	return 0;
}
