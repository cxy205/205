#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n,i,j,p,A,B,C[100];
	char g[5]={},S[20]={};
	A=0;
	B=0;
	
	scanf("%d %s",&n,S);
	
	if(n<1||n>100)
	return 0;
	
	char NAME[100][10]={},STUDENT_ID[100][19]={},N[10],s[19];
    int GRADE[100]={},G;
    //输入 
	for(i=0;i<n;i++)
	{
	scanf("%s %s %s",NAME[i],STUDENT_ID[i],g);
	if(strcmp(g,"n/a")==0)
	{
	GRADE[i]=0;
    }
    else
    { 
	GRADE[i]=atoi(&g[0]);
	}
   
   for(j=0;j<5;j++)
     g[j]='\0';
	}
   //按成绩高低排序 
	for(i=0;i<n;i++)
	  for(j=0;j<i;j++)
	  {
	  	if(GRADE[i]>GRADE[j])
	  	{
	  		G=GRADE[i];
	  		GRADE[i]=GRADE[j];
	  		GRADE[j]=G;
	  		for(p=0;p<10;p++)
			  {	
			N[p]=NAME[i][p];
	  		NAME[i][p]=NAME[j][p];
	  		NAME[j][p]=N[p];
			   } 
	  	
	  		for(p=0;p<18;p++)
	  		{
	  		s[p]=STUDENT_ID[i][p];
	  		STUDENT_ID[i][p]=STUDENT_ID[j][p];   
	  		STUDENT_ID[j][p]=s[p];
			  }
	  			  		
		  }
	  }
	  //排名 
	GRADE[0]=1; 
	for(i=1;i<n;i++)
	{
		if(GRADE[i]==GRADE[i-1])
		C[i]=C[i-1];
		else
		C[i]=i+1;
		
	}
	
	//查找 
    for(i=0;i<n;i++)
    {
	if(strstr(NAME[i],S)!=NULL)
     {
	 if(GRADE[i]!=0)
     printf("%s %s %d %d",NAME[i],STUDENT_ID[i],GRADE[i],C[i]);
	else
	 printf("%s %s n/a n/a",NAME[i],STUDENT_ID[i]);
	 }
	 
	if(strstr(STUDENT_ID[i],S)!=NULL)
	  {
	 if(GRADE[i]!=0)
     printf("%s %s %d %d",NAME[i],STUDENT_ID[i],GRADE[i],C[i]);
	else
	 printf("%s %s n/a n/a",NAME[i],STUDENT_ID[i]);
	 }
	
	if(atoi(S)>0&&atoi(S)<100&&GRADE[i]==atoi(S))
	   {
	 if(GRADE[i]!=0)
     printf("%s %s %d %d",NAME[i],STUDENT_ID[i],GRADE[i],C[i]);
	else
	 printf("%s %s n/a n/a",NAME[i],STUDENT_ID[i]);
	 }
	}
     
	 
     
	 
	return 0;
	
}
