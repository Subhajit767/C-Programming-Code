#include<stdio.h>
main()
 { 
FILE *fp; 
char ch; 
fp=fopen("fileName.txt" ,"r");
 fseek( fp,21 ,SEEK_SET); 
 ch=fgetc(fp);  
while(!feof(fp ))  
{ 
printf("%c" ,ch);
 printf("%d", ftell(fp ));
  ch= getc(fp );  
} 
rewind(fp );
 while(!feof(fp)) 
{  
printf("%c" ,ch);
 printf("%d" ,ftell(fp));
  ch= fgetc(fp); 
} 
fclose(fp ); 
}
