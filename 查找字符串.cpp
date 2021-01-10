#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,j,m,sg=0;
	char str[100];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		
		if(strstr(str,"SCU")==NULL)
		sg=0;
		else
		{
			for(j=0;j<strlen(str);j++)
			{
				if(str[j]=='S')
				{
				m=j;
				break;
				}
			
			}
			if((2*m+3)!=strlen(str))
			sg=0;
			else
			{
			if(m==0)
			sg=1;
			else
			for(j=0;j<m;j++)
			{
				if(str[j]==str[strlen(str)-j-1]&&str[j]==0x41)
				sg=1;
				else
				{
					sg=0;
					break;
				}
			}
			
			
			}
			
		}
		
		if(sg==0)
		printf("NO\n");
		else
		printf("YES\n");
	}
	
	return 0;
 } 
