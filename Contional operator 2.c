#include<stdio.h>
#include<conio.h>
int main(){
	char a;
	printf("Enter your character:");
	scanf("%c",&a);
	(a>=0&&a<=47||a>=58&&a<=64||a>=91&&a<=96||a>=123&&a<=127)?printf("The %c character is a special symbol",a):printf("The %c character is not a special symbol",a);
	return 0;
}
