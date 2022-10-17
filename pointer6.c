#include<stdio.h>
int main()
{
    char str[6] = "Hello";
    char *ptr;
    int i;

    ptr = str; 

    for(i = 0; ptr[i] != '\0'; i++)
        printf("&str[%d] = %p\n",i,ptr+i);
    return 0;
}
