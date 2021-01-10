//分解质因数
//使用递归的方法用逐渐增大的整数去除测试数，如果可以整除，再将除过后得到的数重复进行上述操作 
//由于除数从2开始逐渐增加，可分析得如果被除数能够被一个非质数整除，一定有比该非质数更小的质数使被除数整除，因此不用判断除数是否为质数 
#include<stdio.h> 
#include<string.h>
void BREAK(int m);
int main()
{
	int n,i,j,m;

	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m>=2&&m<=10000)
		{
		
		BREAK(m);
		printf("\n");
		
		}
		
	}
	return 0;
 } 
 
void BREAK(int m)
{
	int i;
	int a;
	a=m;
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		{
		m=m/i;
		break;
		}
		
	}
	if(a==m)
	{
		printf("%d",m);
		return ;
	}
	else
	{
	printf("%d*",i);	
	BREAK(m);
	return ;
	}
	
	
	
}
