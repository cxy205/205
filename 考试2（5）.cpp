#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
	int r,c,i,n,j,m,a,b;
	char CHAR[4]={'\0'},str[50][50]={'\0'},str2[50]={'\0'},str3,B[50]={'\0'};
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	  scanf("%s",str[i]);
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	    scanf("%s",&CHAR);
		
		if(strcmp(CHAR,"SR")==0)
		{  
		      str3=str[a-1][j];
			  str[a-1][j]=str[b-1][j];
			  str[b-1][j]=str3;
		}
		
		if(strcmp(CHAR,"SC")==0)
		{
			scanf("%d %d",&a,&b);
			for(j=0;j<c;j++)
			{
		    scanf("%d %d",&a,&b);
		    for(j=0;j<5;j++)
			str2[j]=str[a-1][j];
			for(j=0;j<50;j++)
			str[a-1][j]=str[b-1][j];
			for(j=0;j<50;j++)
			str[b-1][j]=str2[j];
			}
		}
		
		if(strcmp(CHAR,"DR")==0)
		{
			scanf("%d",&a);
			for(j=(a-1);j<r;j++)
			{
				for(m=0;m<50;m++)
				str[j][m]=str[j+1][m];
			}
		 
		 r-=1;
		}
		
		if(strcmp(CHAR,"DC")==0)
		{
			scanf("%d",&a);
			for(j=0;j<r;j++)
			{
				for(m=a-1;m<c;m++)
				{
				str[j][m]=str[j][m+1]; 
				}	
			}
		  c-=1;
		}
		
		if(strcmp(CHAR,"IR")==0)
		{
			scanf("%d",&a);
		   	for(j=r;j>a-1;j--)
		   	{
		   		for(m=0;m<50;m++)
		   		str[j][m]=str[j-1][m];
		    }
		    for(m=0;m<c;m++)
		    {
		    	str[j][m]='0'; 
			}
			
			r+=1;
		} 
		
		if(strcmp(CHAR,"IC")==0)
		{
			scanf("%d",&a);
			for(m=0;m<r;m++)
			{
				B[m]='0';
			}
			
			for(j=c-1;j>a-1;j--)
			 for(m=0;m<r;m++)
			 {
			 	str[m][j]=str[m][j+1];
			 }
			 
			 for(m=0;m<r;m++)
			    str[m][a-1]=B[m];
			
			c+=1;	
		}
	}
	
	for(i=0;i<r;i++)
	printf("%s\n",str[i]);
	
	return 0;
}
