#include<stdio.h>
#include<string.h>
#include<malloc.h>

int main()
{
	int n,m;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&m);
		int *num;
		num=(int*)malloc(sizeof(int)*m);
		
		for(int j=0;j<m;j++)
		{
		scanf("%d",&num[j]);
		if(num[j]==num[j-1])
		{
			m--;
			j--;
		}	
		}
		if(m==1)
		printf("ERROR\n");
		else
		{
		for(int j=0;j<m;j++)
		 for(int p=0;p<j;p++)
		 {
		   if(num[j]==num[p])
		   {
		    for(int q=j;q<m;q++)
			 num[q]=num[q+1];   
			m--;			
		   }
		}		 	
			
		for(int j=0;j<m;j++)
		 for(int p=0;p<j;p++)
		 {
		   if(num[j]<num[p])
		   {
		   	int a=num[j];
		    for(int q=j;q>p;q--)
			 num[q]=num[q-1];   
			num[p]=a;				
		   }
		}		 
		
		printf("%d\n",num[1]);	
		}
        free(num);
		
	}
	return 0;
}
