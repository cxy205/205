#include<stdio.h>
#include<string.h>

int main()
{
	int n,num;
	float m=0;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(num<0)
		printf("ERROR\n");
		else
		if(num==10000)
		printf("100.00\n");
		else
		{
			for(int j=0;j<100;j++)
		if(j*j>num)
		{
		m=j-1;
		break;	
		}
				
		for(int j=0;j<10;j++)
		if((m+0.1*j)*(m+0.1*j)>num)
		{
	    m=m+0.1*(j-1);
		break;		
		}
		
		for(int j=0;j<10;j++)
		if((m+0.01*j)*(m+0.01*j)>num)
		{
		m=m+0.01*(j-1);	
		break;
		}
		
		for(int j=0;j<10;j++)
		if((m+0.001*j)*(m+0.001*j)>num)
		 if(j>=6)
		 {
		 m=m+0.01;
	      break;	
		 }
		 else
		 break;
		 			
		printf("%.2f\n",m);
		}
		
		
		
	}
	
	return 0;
 } 
