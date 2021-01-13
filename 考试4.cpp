#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n,i,j,A,B;
	float G;
	char g[5]={};
	A=0;
	B=0;
	
	scanf("%d",&n);
	
	if(n<1||n>100)
	return 0;
	
	char NAME[100][10]={},STUDENT_ID[100][19]={};
    int GRADE[100]={};
    
	for(i=0;i<n;i++)
	{
	scanf("%s %s %s",NAME[i],STUDENT_ID[i],g);
	if(strcmp(g,"n/a")==0)
	{
	for(j=0;j<10;j++)
	NAME[i][j]='\0';
	for(j=0;j<19;j++)
	STUDENT_ID[i][j]='\0'; 
	i=i-1;
	n=n-1;
    }
    else
    { 
	G=atoi(&g[0]);
    GRADE[i]=G;
	}
   
   for(j=0;j<5;j++)
     g[j]='\0';
	}

	for(i=0;i<n;i++)
	{
	if((GRADE[i]==GRADE[A])&&(NAME[i][0]<NAME[A][0]))
     A=i;
	if(GRADE[i]>GRADE[A])
	 A=i;
	if((GRADE[i]==GRADE[B])&&(NAME[i][0]>NAME[B][0]))
	 B=i;
	if(GRADE[i]<GRADE[B])
	 B=i;
	}
	
	
	printf("%s %s\n",NAME[A],STUDENT_ID[A]);
	printf("%s %s ",NAME[B],STUDENT_ID[B]);
	
	return 0;
	
}
