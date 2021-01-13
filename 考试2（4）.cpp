#include<stdio.h>
#include<string.h>
int main()
{
	char str[50][10]={};
	int i,n,j,sg=0,len;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	
		scanf("%s",str[i]);
		
		len=strlen(str[i]);
		if(len%2==0)
			for(j=0;j<(len/2);j++)
			{
				
				if(str[i][j]==str[i][len-1-j])
				sg=1;
				else{
				sg=0;
				break;
			    }
			}
		else
		    for(j=0;j<((len-1)/2);j++)
		    {
		    	if(str[i][j]==str[i][len-1-j])
		    	sg=1;
		    	else
		    	{
		    	sg=0;
		    	break;
				}
			}	
		if(sg==1)
		printf("\nYes");
		else
		printf("\nNo");	
	}
	
	return 0;
}
