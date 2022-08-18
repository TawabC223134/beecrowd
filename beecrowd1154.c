#include<stdio.h>
int main()
{
    double a,i,sum,n,avg;
    i=1;
    sum=0;
    n=0;
    while(1)
    {
        scanf("%lf",&a);
        if(a>=0)
        {
            sum+=a;
            n=i;

            i++;

        }
        else if(a<0)
        {
            break;

        }


    }
     avg=sum/n;
        printf("%.2lf\n",avg);
    return 0;
}
