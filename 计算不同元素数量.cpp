#include<stdio.h>
#include<string.h>

int main()
{
	int n,num[30]={},i,j,p;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	
	  
	for(i=0;i<n;i++)
	  for(j=0;j<i;j++)
	   if(num[i]==num[j])
	    {
	   	for(p=i;p<n;p++) 
	      num[p]=num[p+1];
	    n--;
	    i--;
		}
	    
    printf("%d",n);
    
    return 0;
	   
	  
	
}
