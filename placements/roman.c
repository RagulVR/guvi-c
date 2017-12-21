      #include<stdio.h>
        #include<string.h>
        int main(void)
        {
        	int a[20],s,k,i=0;
        	char roman[5];
        	printf("\n Enter the roman");
        	scanf("%s",roman);
        	s=strlen(roman);
        	for(i=0;i<s;i++)
        	{
        		if(roman[i]=='I')
        		a[i]=1;
        		else if(roman[i]=='V')
        		a[i]=5;
        		else if(roman[i]=='X')
        		a[i]=10;
        		else
        		{
        		printf("Enter the roman");
        		}
        	}
        	k=a[s-1];
        	for(i=s-1;i>0;i--)
        	{
        	if(a[i]>a[i-1])
        	k=k-a[i-1];
        	else if(a[i]==a[i-1] || a[i]<a[i-1])
        	k=k+a[i-1];
        }
        printf("%d",k);
        return 0;
        }
