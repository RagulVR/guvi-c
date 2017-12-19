#include<stdio.h>
int main(void)
{
    int n,n1,res=0,temp;
    n=n1;
    printf("\nEnter the number\n");
    scanf("%d",&n);
    while(n != 0)
    {
        temp=n%10;
        res=res*10+temp;
        n=n/10;
    }
    if(res==n1)
    {
        printf("Its a palindrome");
    }
    else
    {
        printf("Its not a palindrome");
    }
    return(0);
}
