#include<stdio.h>
#include<string.h>
int main(){
	char s1[50],s2[50],a[50];
	printf("Enter the first string:");
	gets(s1);
	printf("\nEnter the second string:\n");
	gets(s2);
	printf("\nBefore swapping the two strings are:\n");
	printf("\nFirst string= %s        Second string= %s",s1,s2);
	strcpy(a,s1);
	strcpy(s1,s2);
	strcpy(s2,a);
	printf("\nAfter swapping the two strings are:\n");
	printf("\nFirst string= %s        Second string= %s",s1,s2);
	return 0;
}
