#include<stdio.h>
#include<math.h>
int main()
{
	int r1,r2,num,i,b,c,sum,a;
	printf("Enter the lower and upper range to find all the Armstrong Number between the particular range:");
	scanf("%d %d",&r1,&r2);
	printf("The Armstrong Numbers are:");
	for(i=r1;i<=r2;i++)
	{
		b=i;
		c=0;
		while(b>0)
		{
			b=b/10;
			c++;
		}
	    b=i;
		sum=0;
		while(b>0)
		{
			a=b%10;
			sum=sum+pow(a,c);
			b=b/10;
		}
		if(i==sum)
		printf("%d, ",i);	
	}	
	return 0;
}
