//ע��ո�
#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,j,m;
	char A[4]={},pr[7][26]={};
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	    for(m=0;m<7;m++)
		  	for(j=0;j<26;j++)
		   	pr[m][j]=' ';
	
	    
		scanf("%s",&A);
		if(strlen(A)<=4)
		{
		printf("%s:\n",A); 
		
		for(j=0;j<strlen(A);j++)
		{
			switch(A[j])
			{
				case '0':{
					 	pr[0][7*j]='*';pr[0][7*j+1]='*';pr[0][7*j+2]='*';pr[0][7*j+3]='*';pr[0][7*j+4]='*';
					    pr[1][7*j]='*';pr[1][7*j+1]=' ';pr[1][7*j+2]=' ';pr[1][7*j+3]=' ';pr[1][7*j+4]='*';
					    pr[2][7*j]='*';pr[2][7*j+1]=' ';pr[2][7*j+2]=' ';pr[2][7*j+3]=' ';pr[2][7*j+4]='*';
					    pr[3][7*j]='*';pr[3][7*j+1]=' ';pr[3][7*j+2]=' ';pr[3][7*j+3]=' ';pr[3][7*j+4]='*';
					    pr[4][7*j]='*';pr[4][7*j+1]=' ';pr[4][7*j+2]=' ';pr[4][7*j+3]=' ';pr[4][7*j+4]='*';
					    pr[5][7*j]='*';pr[5][7*j+1]=' ';pr[5][7*j+2]=' ';pr[5][7*j+3]=' ';pr[5][7*j+4]='*';
					    pr[6][7*j]='*';pr[6][7*j+1]='*';pr[6][7*j+2]='*';pr[6][7*j+3]='*';pr[6][7*j+4]='*';
					break;
				       }
				case '1':{
					    pr[0][7*j]=' ';pr[0][7*j+1]=' ';pr[0][7*j+2]=' ';pr[0][7*j+3]=' ';pr[0][7*j+4]='*';
					    pr[1][7*j]=' ';pr[1][7*j+1]=' ';pr[1][7*j+2]=' ';pr[1][7*j+3]=' ';pr[1][7*j+4]='*';
					    pr[2][7*j]=' ';pr[2][7*j+1]=' ';pr[2][7*j+2]=' ';pr[2][7*j+3]=' ';pr[2][7*j+4]='*';
					    pr[3][7*j]=' ';pr[3][7*j+1]=' ';pr[3][7*j+2]=' ';pr[3][7*j+3]=' ';pr[3][7*j+4]='*';
					    pr[4][7*j]=' ';pr[4][7*j+1]=' ';pr[4][7*j+2]=' ';pr[4][7*j+3]=' ';pr[4][7*j+4]='*';
					    pr[5][7*j]=' ';pr[5][7*j+1]=' ';pr[5][7*j+2]=' ';pr[5][7*j+3]=' ';pr[5][7*j+4]='*';
					    pr[6][7*j]=' ';pr[6][7*j+1]=' ';pr[6][7*j+2]=' ';pr[6][7*j+3]=' ';pr[6][7*j+4]='*';
					break;
				}     
				case '2':{
					   	pr[0][7*j]='*';pr[0][7*j+1]='*';pr[0][7*j+2]='*';pr[0][7*j+3]='*';pr[0][7*j+4]='*';
					   	pr[1][7*j]=' ';pr[1][7*j+1]=' ';pr[1][7*j+2]=' ';pr[1][7*j+3]=' ';pr[1][7*j+4]='*';
					    pr[2][7*j]=' ';pr[2][7*j+1]=' ';pr[2][7*j+2]=' ';pr[2][7*j+3]=' ';pr[2][7*j+4]='*';
					    pr[3][7*j]='*';pr[3][7*j+1]='*';pr[3][7*j+2]='*';pr[3][7*j+3]='*';pr[3][7*j+4]='*';
					   	pr[4][7*j]='*';pr[4][7*j+1]=' ';pr[4][7*j+2]=' ';pr[4][7*j+3]=' ';pr[4][7*j+4]=' ';
					   	pr[5][7*j]='*';pr[5][7*j+1]=' ';pr[5][7*j+2]=' ';pr[5][7*j+3]=' ';pr[5][7*j+4]=' ';
					    pr[6][7*j]='*';pr[6][7*j+1]='*';pr[6][7*j+2]='*';pr[6][7*j+3]='*';pr[6][7*j+4]='*';
					break;
				}  
				case '3':{
				        pr[0][7*j]='*';pr[0][7*j+1]='*';pr[0][7*j+2]='*';pr[0][7*j+3]='*';pr[0][7*j+4]='*';
					   	pr[1][7*j]=' ';pr[1][7*j+1]=' ';pr[1][7*j+2]=' ';pr[1][7*j+3]=' ';pr[1][7*j+4]='*';
					    pr[2][7*j]=' ';pr[2][7*j+1]=' ';pr[2][7*j+2]=' ';pr[2][7*j+3]=' ';pr[2][7*j+4]='*';
					    pr[3][7*j]='*';pr[3][7*j+1]='*';pr[3][7*j+2]='*';pr[3][7*j+3]='*';pr[3][7*j+4]='*';
					   	pr[4][7*j]=' ';pr[4][7*j+1]=' ';pr[4][7*j+2]=' ';pr[4][7*j+3]=' ';pr[4][7*j+4]='*';
					   	pr[5][7*j]=' ';pr[5][7*j+1]=' ';pr[5][7*j+2]=' ';pr[5][7*j+3]=' ';pr[5][7*j+4]='*';
					    pr[6][7*j]='*';pr[6][7*j+1]='*';pr[6][7*j+2]='*';pr[6][7*j+3]='*';pr[6][7*j+4]='*';
					break;
				}
				case '4':{
					   pr[0][7*j]='*';pr[0][7*j+1]=' ';pr[0][7*j+2]=' ';pr[0][7*j+3]=' ';pr[0][7*j+4]='*';
					   pr[1][7*j]='*';pr[1][7*j+1]=' ';pr[1][7*j+2]=' ';pr[1][7*j+3]=' ';pr[1][7*j+4]='*';
					   pr[2][7*j]='*';pr[2][7*j+1]=' ';pr[2][7*j+2]=' ';pr[2][7*j+3]=' ';pr[2][7*j+4]='*';
					   pr[3][7*j]='*';pr[3][7*j+1]='*';pr[3][7*j+2]='*';pr[3][7*j+3]='*';pr[3][7*j+4]='*';
					   pr[4][7*j]=' ';pr[4][7*j+1]=' ';pr[4][7*j+2]=' ';pr[4][7*j+3]=' ';pr[4][7*j+4]='*';
				       pr[5][7*j]=' ';pr[5][7*j+1]=' ';pr[5][7*j+2]=' ';pr[5][7*j+3]=' ';pr[5][7*j+4]='*';
					   pr[6][7*j]=' ';pr[6][7*j+1]=' ';pr[6][7*j+2]=' ';pr[6][7*j+3]=' ';pr[6][7*j+4]='*';
					break;
				}
				case '5':{
					   pr[0][7*j]='*';pr[0][7*j+1]='*';pr[0][7*j+2]='*';pr[0][7*j+3]='*';pr[0][7*j+4]='*';
					   pr[1][7*j]='*';pr[1][7*j+1]=' ';pr[1][7*j+2]=' ';pr[1][7*j+3]=' ';pr[1][7*j+4]=' ';
					   pr[2][7*j]='*';pr[2][7*j+1]=' ';pr[2][7*j+2]=' ';pr[2][7*j+3]=' ';pr[2][7*j+4]=' ';
					   pr[3][7*j]='*';pr[3][7*j+1]='*';pr[3][7*j+2]='*';pr[3][7*j+3]='*';pr[3][7*j+4]='*';
					   pr[4][7*j]=' ';pr[4][7*j+1]=' ';pr[4][7*j+2]=' ';pr[4][7*j+3]=' ';pr[4][7*j+4]='*';
				       pr[5][7*j]=' ';pr[5][7*j+1]=' ';pr[5][7*j+2]=' ';pr[5][7*j+3]=' ';pr[5][7*j+4]='*';
					   pr[6][7*j]='*';pr[6][7*j+1]='*';pr[6][7*j+2]='*';pr[6][7*j+3]='*';pr[6][7*j+4]='*';					   
					break;
				}
				case '6':{
					   pr[0][7*j]='*';pr[0][7*j+1]='*';pr[0][7*j+2]='*';pr[0][7*j+3]='*';pr[0][7*j+4]='*';
					   pr[1][7*j]='*';pr[1][7*j+1]=' ';pr[1][7*j+2]=' ';pr[1][7*j+3]=' ';pr[1][7*j+4]=' ';
					   pr[2][7*j]='*';pr[2][7*j+1]=' ';pr[2][7*j+2]=' ';pr[2][7*j+3]=' ';pr[2][7*j+4]=' ';
					   pr[3][7*j]='*';pr[3][7*j+1]='*';pr[3][7*j+2]='*';pr[3][7*j+3]='*';pr[3][7*j+4]='*';
					   pr[4][7*j]='*';pr[4][7*j+1]=' ';pr[4][7*j+2]=' ';pr[4][7*j+3]=' ';pr[4][7*j+4]='*';
				       pr[5][7*j]='*';pr[5][7*j+1]=' ';pr[5][7*j+2]=' ';pr[5][7*j+3]=' ';pr[5][7*j+4]='*';
					   pr[6][7*j]='*';pr[6][7*j+1]='*';pr[6][7*j+2]='*';pr[6][7*j+3]='*';pr[6][7*j+4]='*';
					break;
				}
				case '7':{
					    pr[0][7*j]='*';pr[0][7*j+1]='*';pr[0][7*j+2]='*';pr[0][7*j+3]='*';pr[0][7*j+4]='*';
					    pr[1][7*j]=' ';pr[1][7*j+1]=' ';pr[1][7*j+2]=' ';pr[1][7*j+3]=' ';pr[1][7*j+4]='*';
					    pr[2][7*j]=' ';pr[2][7*j+1]=' ';pr[2][7*j+2]=' ';pr[2][7*j+3]=' ';pr[2][7*j+4]='*';
					    pr[3][7*j]=' ';pr[3][7*j+1]=' ';pr[3][7*j+2]=' ';pr[3][7*j+3]=' ';pr[3][7*j+4]='*';
					    pr[4][7*j]=' ';pr[4][7*j+1]=' ';pr[4][7*j+2]=' ';pr[4][7*j+3]=' ';pr[4][7*j+4]='*';
					    pr[5][7*j]=' ';pr[5][7*j+1]=' ';pr[5][7*j+2]=' ';pr[5][7*j+3]=' ';pr[5][7*j+4]='*';
					    pr[6][7*j]=' ';pr[6][7*j+1]=' ';pr[6][7*j+2]=' ';pr[6][7*j+3]=' ';pr[6][7*j+4]='*';
					break;
				}
				case '8':{
					    pr[0][7*j]='*';pr[0][7*j+1]='*';pr[0][7*j+2]='*';pr[0][7*j+3]='*';pr[0][7*j+4]='*';
					   	pr[1][7*j]='*';pr[1][7*j+1]=' ';pr[1][7*j+2]=' ';pr[1][7*j+3]=' ';pr[1][7*j+4]='*';
					    pr[2][7*j]='*';pr[2][7*j+1]=' ';pr[2][7*j+2]=' ';pr[2][7*j+3]=' ';pr[2][7*j+4]='*';
					    pr[3][7*j]='*';pr[3][7*j+1]='*';pr[3][7*j+2]='*';pr[3][7*j+3]='*';pr[3][7*j+4]='*';
					   	pr[4][7*j]='*';pr[4][7*j+1]=' ';pr[4][7*j+2]=' ';pr[4][7*j+3]=' ';pr[4][7*j+4]='*';
					   	pr[5][7*j]='*';pr[5][7*j+1]=' ';pr[5][7*j+2]=' ';pr[5][7*j+3]=' ';pr[5][7*j+4]='*';
					    pr[6][7*j]='*';pr[6][7*j+1]='*';pr[6][7*j+2]='*';pr[6][7*j+3]='*';pr[6][7*j+4]='*';
					break;
				}
				case '9':{
					    pr[0][7*j]='*';pr[0][7*j+1]='*';pr[0][7*j+2]='*';pr[0][7*j+3]='*';pr[0][7*j+4]='*';
					   	pr[1][7*j]='*';pr[1][7*j+1]=' ';pr[1][7*j+2]=' ';pr[1][7*j+3]=' ';pr[1][7*j+4]='*';
					    pr[2][7*j]='*';pr[2][7*j+1]=' ';pr[2][7*j+2]=' ';pr[2][7*j+3]=' ';pr[2][7*j+4]='*';
					    pr[3][7*j]='*';pr[3][7*j+1]='*';pr[3][7*j+2]='*';pr[3][7*j+3]='*';pr[3][7*j+4]='*';
					   	pr[4][7*j]=' ';pr[4][7*j+1]=' ';pr[4][7*j+2]=' ';pr[4][7*j+3]=' ';pr[4][7*j+4]='*';
					   	pr[5][7*j]=' ';pr[5][7*j+1]=' ';pr[5][7*j+2]=' ';pr[5][7*j+3]=' ';pr[5][7*j+4]='*';
					    pr[6][7*j]='*';pr[6][7*j+1]='*';pr[6][7*j+2]='*';pr[6][7*j+3]='*';pr[6][7*j+4]='*';
					break;
				}
			}
		}
		
		
		
	      for(m=0;m<7;m++)
	      {
		  	for(j=0;j<26;j++)
		  {
		  	printf("%c",pr[m][j]);
		  }
		  printf("\n");
		  }
		 
		}
	}
	return 0;
 } 
