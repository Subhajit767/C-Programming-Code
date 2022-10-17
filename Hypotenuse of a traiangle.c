#include<stdio.h>
int main(){
	float l,b,h;
	printf("Enter the height and base of the right angled triangle:");
	scanf("%f%f", &l, &b);
	h=sqrt(l*l+b*b);
	printf("The length of the hypotenuse of the right angled triangle is:%f",h);
	return 0;
}
