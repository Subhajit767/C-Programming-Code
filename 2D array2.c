#include<stdio.h>
int main(){
	int m,n;
	int std[2][3],i,j;
    for(i=0;i<=1;i++)
    {
    	printf("Enter the number of rows:");
    	scanf("%d %d %d",&std[i][0],&std[i][1],&std[i][2]);
	}
	for(i=0;i<=m;i++)
	{
		printf("%d %d %d\n",std[i][0],std[i][1],std[i][2]);
	}
	return 0;
}
