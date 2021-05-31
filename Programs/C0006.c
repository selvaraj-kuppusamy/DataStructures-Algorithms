#include<stdio.h>
int main()
{
	int x=2,y=2;
	x/=x/y;//x=x/x/y
	printf("%f\n",x);
	return 0;
}
/*
Output: 0.000
*/
