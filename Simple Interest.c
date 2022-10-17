#include<stdio.h>

main(){
	double principal,rate,time,si;
	char name[20];
	printf("Enter your name:");
	scanf("%c", &name);
	printf("\nEnter your Principal value:");
	scanf("%ld", &principal);
	printf("\nEnter your Rate:");
	scanf("%ld", &rate);
	printf("\nEnter your Time:");
	scanf("%ld", &time);
	si=principal*rate*time/100;
    printf("Your Simple Interest is:=%ld",si);
    
}

