#include<stdio.h>
int main(void)
{
    int n,sum=0,i=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(i<n)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
    return(0);
}
