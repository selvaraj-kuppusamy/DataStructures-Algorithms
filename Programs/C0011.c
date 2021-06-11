#include<stdio.h>
int main()
{
	int a[10][20][30]={0};
	a[5][2][1]=2;
	printf("%d",*(*(*(a+5)+2)+1));
	return 0;

}

/*
 * Output:2
 */
