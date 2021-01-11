#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,m,num[100]={};
	float ave=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
    } 
	for(i=0;i<n;i++)
	{
		ave=ave+num[i];
	 } 
	 
	 ave=ave/n;
	 
	 printf("%.2f",ave);
	 
	 return 0;
}
