/*#include <stdio.h>
int main()
{
    int a,b,i,f;
    printf("\nEnter start value : ");
    scanf("%d",&a);
    printf("\nEnter end value : ");
    scanf("%d",&b);
    printf("\nPrime Numbers between %d and %d : ",a,b);
    while (a<b)
    {
     f = 0;
     for(i=2;i<=a/2;++i)
     {
        if(a%i==0)
        {
         f=1;
        
        }
     }  
       if(f == 0)
       printf("%d ",a);
       ++a;
    }
printf("\n");
return 0;
}*/
#include<stdio.h>
int main()
{
	int i,flag,j,n1,n2;
	printf("Enter the range:\n");
	scanf("%d%d",&n1,&n2);
	for(i=n1+1;i<n2;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag!=1)
		printf(" %d ",i);
	}
	return 0;
}
