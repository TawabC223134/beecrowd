#include<stdio.h>
int main()
{
    int id,hr;
    double phr,sal;
    scanf("%d%d%lf",&id,&hr,&phr);
    sal=hr*phr;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",id,sal);
    return 0;
}
