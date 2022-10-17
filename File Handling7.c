#include<stdio.h>
int main()
{
   char name [20];
   int age, length;
   FILE *fp;
   fp = fopen ("test.txt","w");
   fprintf(fp,"%s %d", "Fresh2refresh", 5);
   length=ftell(fp); 
   rewind(fp); 
   fscanf(fp,"%d",&age);
   fscanf(fp,"%s",name);
   fclose(fp);
   printf("Name: %s \n Age: %d \n",name,age);
   printf("Total number of characters in file is %d", length);
   return 0;
}
