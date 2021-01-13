#include<stdio.h>
#include<string.h> 

int JUDGE(int sg,char ch[100]);

int main()
{
	int i,len,k,n,m=0,sg,j,b[100],c;
	char str[100]={'\0'},ch[100]={'\0'},ch3[100][100]={'\0'},a[100]={'\0'};
	
	for(i=0;i<100;i++)
	{
		b[i]=1;
	}
	
	for(;;){ 
     for(i=0;i<100;i++)
     {
     	str[i]='\0';
     	ch[i]='\0';
	 }
	if(scanf("%s",str)==EOF)
	break;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		n=0;
		if(str[i]>=0x30&&str[i]<=0x39)
		{
		for(k=i;;k++)
		{
			if(str[k]<0x30||str[k]>0x39)
			break;
			ch[n]=str[k];
			n++;
		}
		sg=JUDGE(sg,ch);
		if(sg==1)
		{
			for(j=0;j<strlen(ch);j++)
			ch3[m][j]=ch[j];
			m++;
		}
	
		i=k-1;
		}
	 } 	
	 } 
	 
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<i;j++){
	 	if(strcmp(ch3[j],ch3[i])==0)
		 {
		 
	 		for(k=i;k<m;k++)
	 		  for(n=0;n<100;n++)
	 		  ch3[k][n]=ch3[k+1][n];
		 m-=1;
		 i-=1;
		 b[j]=b[j]+1;
		 break;
		 }
		
		 }
	 }
	 
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<i;j++)
	 	{
	 		if(b[j]<b[i])
	 		{
	 			for(n=0;n<100;n++)
	 			{
				 a[n]=ch3[i][n];
	 			ch3[i][n]=ch3[j][n];
	 			ch3[j][n]=a[n];
	 			}
	 			c=b[i];
	 			b[i]=b[j];
	 			b[j]=c;
	 			
			 }
			 
			if(b[j]==b[i])
			{
				if(strlen(ch3[j])>strlen(ch3[i]))
				{
				   for(n=0;n<100;n++)
	 			  {
				     a[n]=ch3[i][n];
	 			     ch3[i][n]=ch3[j][n];
	 			     ch3[j][n]=a[n];
	 			  }
	 			
	 			    c=b[i];
	 			    b[i]=b[j];
	 			    b[j]=c;
				}
				
				if(strlen(ch3[j])==strlen(ch3[i]))
				{
					for(k=0;k<strlen(ch3[j]);k++)
					{
						if(ch3[i][k]<ch3[j][k])
						{
						for(n=0;n<100;n++)
	 			        {
				            a[n]=ch3[i][n];
	 			            ch3[i][n]=ch3[j][n];
	 			            ch3[j][n]=a[n];
	 			        }
	 			
	 			            c=b[i];
	 			            b[i]=b[j];
	 			            b[j]=c;
	 			            
	 			            break;
						}
						
						if(ch3[i][k]>ch3[j][k])
						    break;
					}
				}
			}
			
		 }	 
	}	
	
	if(m==0)
	printf("None");
	else{
	for(i=0;i<m;i++)
	{		
		printf("%s %d\n",ch3[i],b[i]);
		if(b[i]==b[i+1])
		continue;
		else
		break;
	 } 
	}	
	
	

		
	 
	return 0;
}

int JUDGE(int sg,char ch[100])
{
	int len,i;
	char ch2[100]={'\0'};
	len=strlen(ch);
	if(len<2||ch[0]=='0')
	{
		sg=0;return sg;
	}
	for(i=0;i<len;i++)
	{
		ch2[len-i-1]=ch[i];
	}
	if(strcmp(ch,ch2)==0)
	{sg=1;return sg;
	}
	else
	{
	 sg=0;return sg; 
	}
	
}
