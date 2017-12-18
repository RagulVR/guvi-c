#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter the number ABC");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("A is largest");
    }
    else if(b>c && b>a)
    {
        printf("B is largest");
    }
    else
    {
        printf("C is largest");
    }
    return(0);
}
