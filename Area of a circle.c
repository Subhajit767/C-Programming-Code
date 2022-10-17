#include<stdio.h>
#include<math.h>
int main(){
	float radius, area;
	printf("Enter the radius of the circle:");
	scanf("%f",&radius);
	printf("The area of the circle is:");
	area=3.14*pow(radius,2);
	printf("%f",area);
}
