#include<stdio.h>
int main(void)
{
    int i,a,b;
    printf("\nEnter the number\n");
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
            
        }
    }
}


