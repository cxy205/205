#include<stdio.h>
#define GROUP_NUM 10

int main()
{
	int A[GROUP_NUM],B[GROUP_NUM],C[GROUP_NUM],D[GROUP_NUM],E[GROUP_NUM],i;

	 	
	for(i=0;i<10;i++)
	{
		scanf("%d %d %d %d %d",&A[i],&B[i],&C[i],&D[i],&E[i]);
		if(A[i]==0&B[i]==0&C[i]==0&D[i]==0&E[i]==0)
		break;
	 } 
	 
	 for(i=0;i<10;i++)
	 {
	 	if(A[i]==0&B[i]==0&C[i]==0&D[i]==0&E[i]==0)
		break;
		
	 	
	 	if(A[i]-B[i]==B[i]-C[i])
	 	{
		 printf("case one\n");
	 	printf("%d %d %d %d %d\n",E[i]+B[i]-A[i],E[i]+2*(B[i]-A[i]),E[i]+3*(B[i]-A[i]),E[i]+4*(B[i]-A[i]),E[i]+5*(B[i]-A[i]));
	 }
	 	
	 	if(C[i]*A[i]==B[i]*B[i])
	 	{
	 	printf("case two\n");
	 	printf("%d %d %d %d %d\n",E[i]*B[i]/A[i],E[i]*(B[i]/A[i])*(B[i]/A[i]),E[i]*(B[i]/A[i])*(B[i]/A[i])*(B[i]/A[i]),E[i]*(B[i]/A[i])*(B[i]/A[i])*(B[i]/A[i])*(B[i]/A[i]),E[i]*(B[i]/A[i])*(B[i]/A[i])*(B[i]/A[i])*(B[i]/A[i])*(B[i]/A[i]));
	 }
	 	if(C[i]==A[i]+B[i]&D[i]==C[i]+B[i])
	 	{
	 	printf("case three\n");
	 	printf("%d %d %d %d %d\n",D[i]+E[i],D[i]+2*E[i],2*D[i]+3*E[i],3*D[i]+5*E[i],5*D[i]+8*E[i]);
	 }
	 }
	
//	printf("%d,%d,%d,%d,%d",A[0],B[0],C[0],D[0],E[0]);
	return 0;
}
