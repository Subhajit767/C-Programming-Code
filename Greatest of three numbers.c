#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter the value of three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	d=(a>b)&&(a>c)?a:((b>c)?b:c);
	printf("The greatest of the three numbers is %d",d);
	return 0;
}
