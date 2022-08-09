#include<stdio.h>
int main()
{
    double i,n,x,sum;
    i=1;
    n=6;
    sum=0;
    while(i<=n)
    {
        scanf("%lf",&x);
        if(x>0)
        {
            sum+=1;
        }
        i++;
    }
    printf("%.0lf valores positivos\n",sum);

}
