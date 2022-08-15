#include<stdio.h>
int main()
{
    int i,n,sum;
    scanf("%d",&n);
    i=2;

    while(i<=10000)
    {
        i+=n;
        printf("%d\n",i);
    }

    return 0;


}
