#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,m[20]={},max=0,min=0,k;
	char ch[20]={},tab[31][40]={};
	
	scanf("%d",&n);
	if(n<1||n>20)
    return 0;	
	for(i=0;i<n;i++)
	{
		scanf("%d%c",&m[i],&ch[i]);
		if(m[i]<-15||m[i]>15)
		return 0;
		if(ch[i]==0X20)
		ch[i]='+';
		if(ch[i]=='\n')
		ch[i]='+';
	}
	
	for(i=0;i<n;i++)
	{
		if(m[i]>=0)
		{
			if(m[i]>max)
			max=m[i];
		}
		else{
		if(m[i]<min)
		min=m[i];
		}
		
	 } 
	 
	 for(i=0;i<(max-min+1);i++)
	  {
	  	if(i<max)
		{
		  for(k=0;k<2*n-1;k+=2)
	  	{
	  		if(max-i>m[k/2])
	  		{
	  			tab[i][k]=0x20;
	  			tab[i][k+1]=0x20; 
			  }
			else{
			    tab[i][k]=ch[k/2];
			    tab[i][k+1]=0x20;
			}
			    
	    }
	    }
		  
	    if(i==max)
		{
		  for(k=0;k<2*n-1;k++)
		  tab[i][k]='-';
        }
        
        if(i>(max)&&i<(max-min+1))
        {
          for(k=0;k<2*n-1;k+=2)
          {
          	if((max-i)>=m[k/2]&&(max-i)<0)
			  {
			     tab[i][k]=ch[k/2];
          	     tab[i][k+1]=0x20;
			  }
          
          	else
			 {
			    tab[i][k]=0x20;
			    tab[i][k+1]=0x20;
			  }
          	
		  }
		}
	}

		for(i=0;i<(max-min+1);i++)
		{
			for(k=0;k<2*n-1;k++)
			{
				printf("%c",tab[i][k]);
			}
			printf("\n");
		}
		  
		 
	  	
		
	  
	return 0;
}
