#include<stdio.h>
#include<math.h>

int JUDGE(int i,int sg); 

int main()
{
	int n,a,b,i,sg;
	sg=1;
	
	scanf("%d",&n);
	if(n<7||(n%2)!=0)
	printf("ERROR");
	
	for(i=3;i<=n/2;i+=2){
	b=n-i;
	if(JUDGE(i,sg)==0&&JUDGE(b,sg)==0)
	printf("%d %d\n",i,b);
	}
	
	
	 return 0;
}

int JUDGE(int i,int sg)
{
	float s;
	
	for(int k=2;k<i;k++)
	{
		s=(float)i/k;
		if(s-(int)s==0){
		sg=1;
		break;
		}
		else
		sg=0;
	}
	
	return sg;
}
