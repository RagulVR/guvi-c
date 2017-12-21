        #include<stdio.h>
        #include<string.h>
        int main(void)
        {
        	char str[5];
        	int i,length,temp=0;
        	printf("\nEnter the char\n");
        	scanf("%s",&str);
        	length=strlen(str);
        	for(i=0;i<length;i=i+2)
        	{
        		if(str[i+1]!=0)
        		{
        			temp=str[i];
        			str[i]=str[i+1];
        			str[i+1]=temp;
        		}
        	}
        	printf("%s",str);
        	return(0);
        }
