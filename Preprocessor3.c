#include<stdio.h>
#define start 2
int main()
{
	#ifdef start
	printf("\n Hello");
	#else
	printf("\n Bye");
	#endif
	return 0;
}
