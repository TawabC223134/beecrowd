#include<stdio.h>
int main()
{
    int i,n,x,a,cnt;
    i=1;
    n=5;
    a=0;
    cnt=0;
    while (i<=n)
    {
       scanf("%d",&x);
       if(x>a)
       {
         a=x;
         cnt=i;
       }
          i++;

    }
            printf("%d\n",a);
            printf("%d\n",cnt);


}
