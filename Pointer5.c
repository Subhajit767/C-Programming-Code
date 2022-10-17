#include<stdio.h>

 main(){
	char *name;
	int length;
	char *cptr= name;
	name="DELHI";
	for(cptr=0;*cptr!='\0';cptr++)
	{
		printf("%c is stored at address %u\n",*cptr,cptr);
	}
	length=cptr-name;
	printf("\nLength of the string = %d\n",length);
	return 0;
}
