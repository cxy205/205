//判断回文数 
//将字符倒序判断是否与原来相同 
#include<stdio.h>
#include<string.h> 

int main()
{   
    int n,i,j,sg=0;
    char str[32],str2[32];
    
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		
		for(j=0;j<strlen(str);j++)
		{
			str2[j]=str[strlen(str)-j-1];
		}
		
	    for(j=0;j<strlen(str);j++)
	    {
	    	if(str2[j]==str[j])
	         sg=0;
			else
			 {
			 	sg=1;
			 	break;
			 }
		}
		if(sg==0)
			printf("yes\n");
		else
		    printf("no\n"); 
	}   
	
	return 0;
 } 
