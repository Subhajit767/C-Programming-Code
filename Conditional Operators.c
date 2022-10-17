#include<stdio.h>
#include<conio.h>
int main(){
	char a;
	printf("Enter your character:");
	scanf("%c",&a);
	(a>=97 && a<=122)?printf("The %c character is a lower case alphabet",a):printf("The %c character is not a lower case alphabet",a);
	return 0;
}
