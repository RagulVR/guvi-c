#include <stdio.h>
int main(void) {
	int m,n,flag;
	scanf("%d%d",&a,&b);
	printf("\n The prime numbers between %d and %d are:",m,n);
	for(int i=m+1;i<n;i++)
	{
		flag=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
	
	if(flag==0)
	{
		printf("%d\n",i);
	}
	}
	return 0;
}

