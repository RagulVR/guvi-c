#include <stdio.h>
int main(void) {
int m,n,temp,s=0,rem;
scanf("%d%d",&m,&n);
for(int i=m+1;i<n;i++)
{
temp=i;
while(temp!=0)
{
	rem=temp%10;
	s+=rem*rem*rem;
	temp=temp/10;
}
if(i==s)
{
	printf("%d\n",i);
}
}
	return 0;
}
