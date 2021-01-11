#include<stdio.h>
#include<string.h>

int main()
{
	int num[10]={},i,j;
	
	for(i=0;i<=9;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=1;i<10;i++)
		if(num[i]!=0)
		{
			printf("%d",i);
			num[i]--;
			break;
		}
	
	for(i=0;i<10;i++)
		if(num[i]!=0)
		  for(j=0;j<num[i];j++)
		   printf("%d",i);
	return 0;
	
}
