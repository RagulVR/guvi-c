#include<stdio.h>
int main(void)
{
    char a;
    printf("Enter the character");
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("The character is vovel");
    }
    else
    {
        printf("The character is not  vovel");
    }
    return(0);
}
