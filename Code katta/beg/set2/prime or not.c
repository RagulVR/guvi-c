#include<stdio.h>
int main(void)
{
    int i,n,count=0;
    printf("\nEnter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("Its a prime number");
    }
    else
    {
        printf("Its not a prime number");
    }
}
