#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char ch;
	char source[67];
	int count=1;
	puts("Enter the file name:");
	gets(source);
	fp=fopen(source,"r");
	if(fp==NULL)
	{
		puts("Unable to open the file");
		getch();
		exit();
	}
	printf("Filename:%s",source);
	printf("\nLine:-%d\t",count);
	while((ch=getc(fp))!=EOF)
	{
		if(ch=='\n')
		{
			count++;
			printf("\nLine:-%d\t",count);
		}
		else
		printf("%c",ch);
	}
	printf("\nPress any key........");
	fclose(fp);
	return 0;
}
