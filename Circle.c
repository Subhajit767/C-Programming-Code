#include<stdio.h>
#include<math.h>
int main(){
	float x1,x2,r,y1,y2,ab;
	printf("Enter the coordinate of the centre:");
	scanf("%f%f",&x1,&x2);
	printf("Enter the required point.");
	scanf("%f%f",&x2,&y2);
	printf("Enter the radius of the circle:");
	scanf("%f",&r);
	ab=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	if(ab>r)
	{
		printf("Point (%f%f) lies outside the circle.",x2,y2);
	}
	if(ab<r)
	{
		printf("Point (%f%f) lies inside the circle.",x2,y2);
		
	}
	if(ab==r)
	{
	printf("Point (%f%f) lies on the circle.",x2,y2);
	}
	return 0;
}
