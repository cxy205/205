#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n,i,j,m,num[100]={};
	char NUM[100]={};
	float ave=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<100;j++)
		{
			NUM[j]=' ';
		}
		
		scanf("%s",&NUM);
		if(strcmp("n/a",NUM)==0)
		{
		n--;
		i--;
		}
		else
		{
		num[i]=atoi(&NUM[0]);
		}
    } 
    
    if(i==0)
    printf("n/a");
    else
    {
	for(i=0;i<n;i++)
	{
		ave=ave+num[i];
	 } 
	 
	 ave=ave/n;
	 
	 printf("%.2f",ave);
	}

	 
	 return 0;
}
