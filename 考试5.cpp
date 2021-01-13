#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void exchange(int *pv1,int *pv2);
void exchangeC(char *pv3,char *pv4);
int main()
{
	int n,i,N,a,ind,sg,j,val;
    ind=0;
	char NAME[100][10]={}, NAMEt[100][10]={},STUDENT_ID[100][19]={},STUDENT_IDt[100][19]={},A[18]={};
    int GRADE[100]={},GRADEt[100]={},B[100]={},Bt[100]={};
    B[0]=1;
    
	scanf("%d %s",&n,A);
	
	if(n<1||n>100)
	return 0;
	
	if(A[0]<0x30||A[0]>0x39)
	sg=0;
	else
	sg=1;
	
	
    
	for(i=0;i<n;i++)
	scanf("%s %s %d",NAME[i],STUDENT_ID[i],&GRADE[i]);

    
	for(i=0;i<n;i++)
	{
	for(j=0;j<i;j++)
	{
		if(GRADE[i]>GRADE[j])
		{
		exchange(&GRADE[i],&GRADE[j]);
		exchangeC(NAME[i],NAME[j]);
		exchangeC(STUDENT_ID[i],STUDENT_ID[j]);
		}
		
		
	}
 
	}
	
	for(i=0;i<n;i++)
	{ 
	    B[i]=i+1;
		if(GRADE[i]==GRADE[i-1])
	    B[i]=B[i-1];
	   	
	}
	
	    j=0;
		for(i=0;i<n;i++)
		{
		if(strstr(NAME[i],A)!=NULL)
		{
	    memcpy(NAMEt[j],NAME[i],sizeof(NAME[i]));
		memcpy(STUDENT_IDt[j],STUDENT_ID[i],sizeof(STUDENT_ID[i]));
		GRADEt[j]=GRADE[i];
		Bt[j]=B[i];
		j+=1;}
		if(strstr(STUDENT_ID[i],A)!=NULL)
	{
		memcpy(NAMEt[j],NAME[i],sizeof(NAME[i]));
		memcpy(STUDENT_IDt[j],STUDENT_ID[i],sizeof(STUDENT_ID[i]));
		GRADEt[j]=GRADE[i];
		Bt[j]=B[i];
		j+=1;}
		if(sg==1)
		{
		val=atoi(A);
		if(val==GRADE[i])
		{
		memcpy(NAMEt[j],NAME[i],sizeof(NAME[i]));
		memcpy(STUDENT_IDt[j],STUDENT_ID[i],sizeof(STUDENT_ID[i]));
		GRADEt[j]=GRADE[i];
		Bt[j]=B[i];
		j+=1;}
		}
		
		}
	
	for(i=0;i<j;i++){
	if(GRADEt[i]==0)
	printf("%s %s n/a n/a\n",NAMEt[i],STUDENT_IDt[i]);
	else
	printf("%s %s %d %d\n",NAMEt[i],STUDENT_IDt[i],GRADEt[i],Bt[i]);

	}
	
	return 0;
	
}


void exchange(int *pv1,int *pv2)
{
    int tmp;
    tmp=pv1[0];
    pv1[0]=pv2[0];
    pv2[0]=tmp;
}

void exchangeC(char *pv3,char *pv4)
{   
    int len,i;
	len=strlen(pv3);
	char tmp2;
	for(i=0;i<len;i++)
	{
	tmp2=pv3[i];
	pv3[i]=pv4[i];
	pv4[i]=tmp2;
	}
	
 } 
