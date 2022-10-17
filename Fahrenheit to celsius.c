#include<stdio.h>
int main(){
	float tc, tf;
	printf("\nEnter Temperature in Fahrenheit:");
	scanf("%f", &tf);
	tc=(tf-32)/1.8;
	printf("\nTemperature in Celsius: %f", tc);
	return 0;
}
