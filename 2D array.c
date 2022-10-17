#include<stdio.h>
int main(){
	int std[4][2];
	int i;
	for(i=0;i<=3;i++)
	{
		printf("Enter Roll No & Marks:");
		scanf("%d %d",&std[i][0],&std[i][1]);
	}
	for(i=0;i<=3;i++)
	printf("%d %d\n",std[i][0],std[i][1]);
	return 0;
}
