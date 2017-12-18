#include<stdio.h>
int main(void)
{
    int a;
    printf("Enter the year");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("Its leap year");
    }
    else
    {
        printf("Its not a leap year");
    }
    return(0);
}
