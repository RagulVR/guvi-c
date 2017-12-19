#include<stdio.h>
int main(void)
{
int i,a,count=0,sum;
printf("\nEnter the number\n");
scanf("%d",&a);
count=a;
for(i=1;i<=3;i++)
{
    count=count*10;
    a=a+count;
    sum=sum+a;
}
printf("%d",sum+9);
return(0);
}
