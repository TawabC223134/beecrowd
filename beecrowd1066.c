#include<stdio.h>
int main()
{
    int n,i,x,sum1,sum2,sum3,sum4;
    scanf("%d",&n);
    i=1;
    sum1=0;
    sum2=0;
    sum3=0;
    sum4=0;
    while(i<=n)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            sum1++;
        }

        if(x%2!=0)
        {
         sum2++;
        }
        if(x>0)
        {
            sum3++;
        }
        if(x<0)
        {
            sum4++;
        }
        i++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",sum1,sum2,sum3,sum4);
    return 0;
}

