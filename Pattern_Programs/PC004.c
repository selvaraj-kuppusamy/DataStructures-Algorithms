/*
1234
123
12
1
*/
#include"stdio.h"
int main()
{
	int n,i,j;
	printf("Enter the Number: ");
	scanf("%d",&n);
	for(i=n;1<=i;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

}

