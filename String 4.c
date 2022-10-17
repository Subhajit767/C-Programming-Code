#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char s[40];
	printf("Enter your name:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		printf("The ASCII value of %c is %d",s[i],s[i]);
	}
}
