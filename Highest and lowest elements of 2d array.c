#include<stdio.h>
int main()
{
	int a[3][4],h,l,c,d;
	printf("Enter the elements of matrix:");
	
	for(c=0;c<3;c++)
	{
		for(d=0;d<4;d++)
		{
			scanf("%d",&a[c][d]);
		}
	}
	l=a[0][0];
	h=a[0][0];
	for(c=0;c<3;c++)
	{
		for(d=0;d<4;d++)
		{
		if(l>a[c][d])
		{
			l=a[c][d];
		}
			if(h<a[c][d])
		{
			h=a[c][d];
		}
		}
	}
	printf("The lowest and highest of all element of matrix is:%d %d",l,h);
}
