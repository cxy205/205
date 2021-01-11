#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
 int A[500]={},B[500]={},i,C[1000]={},D[500][1000]={},e=0,m=0,lena,lenb,j,E[500];//e表示进,数组D表示数组A与B依次相乘时得到的数列 
 char a[500]={},b[500]={},ch1=0,ch2=0;
  scanf("%s %s",a,b);
  
  for(i=0;i<500;i++)
  {
  	ch1=a[i];
  	A[i]=atoi(&ch1);
  	if(A[i]==0)
  	break;
  }
  lena=i;
  for(i=0;i<500;i++)
  {
  ch2=b[i];
  B[i]=atoi(&ch2);
  if(B[i]==0)
  break;
  }
  lenb=i;
  
  for(i=lenb-1;i>=0;i--){
     for(m=lena-1;m>=0;m--)
     {
     	D[i][m]=(A[m]*B[i]+e)%10;
        e=(A[m]*B[i]+e)/10;    	
	 }
	 if(e>=1){
	 D[i][m]=e;
	 E[i]=m+1;}
	 else
	 E[i]=m;
  }
  	 
	 e=0;
  for(i=0;i<1000;i++)
  {
  	for(m=0;m<i+1;m++)
  	{
  		j=E[m]-i-1+m;
  		if(j>=0){
			C[i]=D[m][j]+C[i];
  		}
  		
	  }
	e=(C[i]+e)/10;
	C[i]=(C[i]+e)%10;
  }
  
  for(i=1000;i>=1;i--)
  if(i<(E[lenb-1]+lenb))
  printf("%d",C[i]);
  
  return 0;
  
 
 } 
