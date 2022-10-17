#include<stdio.h>
#include<string.h>
main(){
	char s1[20], s2[20], s3[20];
	int x,l1,l2,l3;
	printf("\n\n Enter two string constants:\n");
	scanf("%s%s",&s1,&s2);
	
	x=strcmp(s1,s2);
	if(x!=0)
	{
		printf("\n\n Strings are not equal\n");
		strcat(s1,s2);
	}
	else
	{
		printf("\n\nStrings are equal\n\n");
		
	}
	strcpy(s3,s1);
	l1=strlen(s1);
	l2=strlen(s2);
	l3=strlen(s3);
	printf("s1=%s\tlength=%d characters\n",s1,l1);
		printf("s2=%s\tlength=%d characters\n",s2,l2);
	printf("s3=%s\tlength=%d characters\n",s3,l3);
}
