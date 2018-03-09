#include <stdio.h>
int main(void) {
int a,temp,s,rem;
scanf("%d",&a);
temp=a;
while(a!=0)
{
	rem=a%10;
	s+=rem*rem*rem;
	a=a/10;
}
if(temp==s)
{
	printf("yes");
}
else
{
	printf("no");
}

	return 0;
}
