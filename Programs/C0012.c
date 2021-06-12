#include<stdio.h>
int main()
{
        int i=0,n;
        int a[10]={1,2,3,4,5,6,7,8};
        n=a[++i]+i+++a[i++]+a[i];
        printf("%d",n);
        return 0;
}
/*
 * Output :10
 */
