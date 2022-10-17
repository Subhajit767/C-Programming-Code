#include<stdio.h>
int main(){
	float a,b,c,s,area,perimeter;
	printf("Enter the three sides of a triangle:");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	perimeter=a+b+c;
	printf("\nArea of the triangle is: %f",area);
	printf("\nPerimeter of the triangle is: %f",perimeter);
	return 0;
}
