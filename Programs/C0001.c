#include<stdio.h>
int main()
{
	char *ptr;
	char string[] = "how are you?";
	ptr=string;
	ptr+=4;
	printf("%s",ptr);
	return 0;
}
/*
OUTPUT:are you?
*/
