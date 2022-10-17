#include<stdio.h>
#include<string.h>
main(){
	char s[1000];
	int i,vowels=0,consonents=0;
	printf("Enter the string:\n");
    scanf("%s",&s);
	for(i=0;s[i];i++)
	{
		if((s[i]>=65 &&s[i]<=90)||(s[i]>=97&& s[i]<=122))
		{
			if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
			vowels++;
			else
			consonents++;
		}
		
	}
	printf("vowels= %d\n",vowels);
	printf("consonents= %d\n",consonents);
	return 0;
}
