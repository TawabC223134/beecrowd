
#include<stdio.h>
int main()
{
    int i,x,n;
    scanf("%d",&x);
    i=1;
    while (i<=10)
    {
        n=i*x;
        printf("%d x %d = %d\n",i,x,n);
        i++;
    }
}
