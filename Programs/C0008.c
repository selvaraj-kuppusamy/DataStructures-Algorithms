#include<stdio.h>
int main()
{
	int a=5;
	int b=++a*a++;
	printf("%d",b);
	return 0;
}
/*
 * Output:42
 */
