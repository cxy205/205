#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>

int main()
{
	int i,w,n,j,m,e,p;
	int *a,*b,*c;
	char A;
	
	
	for(;;)
	{    
	   if(scanf("%d %d",&w,&n)==EOF)
	   break;
		
		
		 a=(int*)malloc(sizeof(int)*n);
	     b=(int*)malloc(sizeof(int)*n);
    	 c=(int*)malloc(sizeof(int)*w);
	
	    for(i=0;i<n;i++)
	    {
	    	a[i]=0;
	    	b[i]=0;                              //注意动态内存的分配一定要在输入n，w之后 
		}
		
		for(i=0;i<w;i++)
		{
			c[i]=0;
		}
		
			for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		if(w%2==0)
		printf("ERROR\n");
		else
		{
		for(i=(w-1)/2;i<n-(w-1)/2;i++)
		{
			for(m=0,j=i-(w-1)/2;m<w;m++,j++)
			c[m]=a[j];
			
			 for(j=0;j<w;j++)
	            for(m=0;m<j;m++)
				 if(c[m]<c[j])
				 {
				 	e=c[j];
				 	for(p=j;p>m;p--)
				 	  c[p]=c[p-1];	 
				 	c[p]=e;
				  } 
				  
				  
			b[i]=c[(w-1)/2];
		}
		
		for(i=0;i<(w-1)/2;i++)
		b[i]=a[i];
		
		for(i=n-(w-1)/2;i<n;i++)
		b[i]=a[i];	
		
		for(i=0;i<n-1;i++)
		printf("%d ",b[i]);	  
		printf("%d\n",b[i]);
		}
		
	    free(a);
		free(b);
		free(c);   
	}
	return 0;
 } 
