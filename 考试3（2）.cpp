#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,A[20]={'\0'},max=0,i;
	
	scanf("%d",&n);
	if(n<1||n>20)
	return 0;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(abs(A[i])>abs(max))
		max=A[i];
	}
	
	printf("%d",max);
	return 0;
	
	
}
