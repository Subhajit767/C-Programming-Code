#include<stdio.h>
#include<conio.h>
 main(){
	int i,j,k,f=1;
	
	for(i=1;i<=4;i++)
	{
		k=f;
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			if(k==1)
				k=0;
			
			
			else
				k=1;
		
			
		}
		printf("\n");
		if(f==1)
			f=0;
		
		
		else
				f=1;
	
		
	}
	
}
