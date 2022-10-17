#include<stdio.h>
int main(){
	int a,b=-4;
	printf("Enter a number:");
	scanf("%d",&a);
	while(b<=a){
		printf("%d\n",b);
		b=b+1;
	}
	return 0;
}
