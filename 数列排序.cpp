#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n,m,i,j,p,q;
	int a[50],b[100];
	char c[100],d[100];
	
	for(i=0;i<50;i++)
	a[i]='\0';
	for(i=0;i<100;i++)
	b[i]='\0';

		
	scanf("%d %d",&n,&m);

	
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<m;i++)
	{
	scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		q=0;
	for(j=0;j<n+m;j++)
	{
	 if(a[i]<b[j])
	  	{
	  		for(p=m+n-1;p>=j;p--)
	  	      b[p]=b[p-1];
	  	      
	  	    b[j]=a[i];
	  	    break;
	    }
	   else
	   q++;	
	}
	
  
	if(q==n+m)
	break; 
	}
	  
	    
	if(q==n+m)
	  for(;i<n;i++)
	    b[n+m-n+i]=a[i];
	
	
		    
    for(i=0;i<n+m;i++)
    	printf("%d ",b[i]);
    	
	
    return 0;

} 
