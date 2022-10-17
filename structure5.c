#include<stdio.h>
struct member
	{
		char name[20];
		int class;
		int roll;
		int marks;
	};
	struct member b1,b2,b3;
int main(){
	printf("Enter names,class,roll no & marks\n");
	scanf("%c%d%d%d",&b1.name,&b1.class,&b1.roll,&b1.marks);
	scanf("%c%d%d%d",&b2.name,&b2.class,&b2.roll,&b2.marks);
	scanf("%c%d%d%d",&b3.name,&b3.class,&b3.roll,&b3.marks);
	printf("%c %d %d %d",b1.name,b1.class,b1.roll,b1.marks);
	printf("%c %d %d %d",b2.name,b2.class,b2.roll,b2.marks);
	printf("%c %d %d %d",b3.name,b3.class,b3.roll,b3.marks);
	return 0;
}
