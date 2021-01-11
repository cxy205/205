#include<stdio.h>

int Func(int n,int k,int sum);
int main()
{
	int n;
    int a,k,sum,c; 
    
	
	
	scanf("%d",&n);
    
	scanf("%d",&a);
	
	scanf("%d",&k); 
	
	if(n>=2&&n<=100&&a>0&&a<=100&&k<=100&&k>0)
	{ 
	sum=a;
	c=Func(n,k,sum);
	
	printf("%d",c);
	}
	else
	printf("Wrong Number");
	
	return 0;
}
int Func(int n,int k,int sum)
{  
    
	if(n>1)
	{
	sum+=k;
	Func(n-1,k,sum);
    }
    else
    {
    	return sum;
	}
}
