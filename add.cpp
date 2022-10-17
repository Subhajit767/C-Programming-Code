#include<stdio.h>
#include<math.h>
int main() {
float a,b;
printf("Enter the lenghth and breadth of the rectangle:");
scanf("%f%f",&a,&b);
printf("The perimeter of the rectangle is= %f",2*(a+b));
printf("\nThe area of the rectangle is= %f",a*b);
	return 0;
}
