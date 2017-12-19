#include<stdio.h>
int main(void)
{
    int n,sum,pow;
    printf("\n Enter  the number\n");
    scanf("%d",&n);
    printf("\n Enter the power\n");
    scanf("%d",&pow);
    sum=1;
    while(pow != 0)
    {
        sum=sum*n;
        --pow;
    }
    printf("%11d,sum");
    return(0);
}
