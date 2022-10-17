#include<stdio.h>
#include<string.h>
int main(){
	char s[50];
	printf("Enter the string:");
	gets(s);
	printf("\n\n Before reversing the string: %s\n\n",s);
	strrev(s);
	printf("\n\n After reversing the string: %s\n\n",s);
}
