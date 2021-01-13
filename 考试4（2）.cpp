#include<stdio.h>
int main()
{
	int T,m,n,p,i,A[3]={},j,B[500][4]={'\0'},ind=0,C[4],a;
	
	scanf("%d",&T);
	
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&m,&n);
		if(m<100||m>999||n<100||n>999||m>n)
		return 0;
		
		p=m;	ind=0;
		
		while(p>=m&&p<=n)
		{
		
	     a=p;
		for(j=0;j<3;j++)
		{
			A[j]=a%10;
			a=a/10;
		}
		
		if(p==A[0]*A[0]*A[0]+A[1]*A[1]*A[1]+A[2]*A[2]*A[2])
		{
		B[i][ind]=p;
		ind++;
		}
		p+=1; 
		}
		C[i]=ind;		
	}
	
	for(i=0;i<T;i++)
	{
		if(C[i]==0)
		{
		printf("-1\n");
		goto done1;
		}
		
		for(j=0;j<C[i];j++)
		printf("%d ",B[i][j]);
		
		printf("\n");
		
		done1:
			;
	}
	return 0;
	
	
	
}
