//ͳ��һ���ı��г��ִ�������Ӣ�ĵ��ʡ����ʲ����ִ�Сд������Hello���͡�hello����ʾͬһ�����ʡ����ʺ͵���֮����һ����������ĸ�ַ�������
//��������Ϊһ���ı������ܰ��������У�ֱ���ļ�ĩβ(EOF)Ϊֹ����ֻ��һ����������� 
//����ö��ı��г������ĵ���(ȫ�任��Сд��ĸ)�����õ��ʳ��ֵĴ������м��ÿո������������ִ������ĵ����ж��������ֵ������(ȫת����Сд��ĸ�Ƚ�)���Ǹ���
//ע���˳����� 
//����ʹ��һ�����м��� 
//ע���ֵ��� 
#include<stdio.h>
#include<string.h>

int main()
{
	int i=0,n=0,j,c,p,m,num[50]={};
	char str[10]={},strout[50][10]={},str2[10]={};
	
	for(j=0;j<50;j++)
	{
		num[j]=1;
	}
	
	for(;;)
	{
	
	    for(j=0;j<10;j++)
		{
			str[j]='\0';
		 } 
		 
		 
		for(i=0;i<10;i++)
		{		
		str[i]=getchar();

		switch (str[i])
		{ 
		
			case 'A':{
				str[i]='a';
				break;
			}
			case 'B':{
				str[i]='b';
				break;
			}
			case 'C':{
				str[i]='c';
				break;
			}
			case 'D':{
				str[i]='d';
				break;
			}                               
			case 'E':{
				str[i]='e';
				break;
			}
			case 'F':{
				str[i]='f';
				break;
			}
			case 'G':{
				str[i]='g';
				break;
			}
			case 'H':{
				str[i]='h';
				break;
			}
			case 'I':{
				str[i]='i';
				break;
			}
			case 'J':{
				str[i]='j';
				break;
			}
			case 'K':{
				str[i]='k'; 
				break;
			}
			case 'L':{
				str[i]='l';
				break;
			}
			case 'M':{
				str[i]='m';
				break;
			}
			case 'N':{
				str[i]='n';
				break;
			}
			case 'O':{
				str[i]='o';
				break;
			}
			case 'P':{
				str[i]='p';
				break;
			}
			case 'Q':{
				str[i]='q';
				break;
			}
			case 'R':{
				str[i]='r';
				break;
			}
			case 'S':{
				str[i]='s';
				break;
			}
			case 'T':{
				str[i]='t'; 
				break;
			}
			case 'U':{
				str[i]='u';
				break;
			}
			case 'V':{
			    str[i]='v';  
		        break;
		    }
		    case 'W':{
		    	str[i]='w';
				break;
			}
			case 'X':{
				str[i]='x';
				break;
			}
			case 'Y':{
				str[i]='y';
				break;
			} 
			case 'Z':{
				str[i]='z';
				break;
			}
			default:{
				break;
			}
	}
		if(str[0]==EOF)
		break;
		
		if(str[i]<0x61||str[i]>0x7a)
		{
		str[i]='\0'; 
		break;
		}
				
	}	
	
		if(str[0]==EOF)
		break;
		
		if(i!=0)
		{
			for(j=0;j<strlen(str);j++)
			strout[n][j]=str[j];
			n++;
		}
	}//�����õ��ʻ���Сд��ʽ�������г� 
	
	for(i=0;i<n;i++)
	  for(j=0;j<i;j++)
	  {
	  	if(strcmp(strout[i],strout[j])==0)
	  	{
		  for(m=i;m<=n;m++)
		    for(p=0;p<10;p++)
		    {
		    	strout[m][p]=strout[m+1][p];  //ɾ��������ظ�����
			}
		  num[j]=num[j]+1;//���� 
		  n--;
		  i--;
		  }
	  }	
		
	for(i=0;i<n;i++)
	  for(j=0;j<i;j++)
	   {
	   	if(num[j]<num[i])
	   	{
	   	   	c=num[j];
	   	   	num[j]=num[i];
	   	   	num[i]=c;
	   	   	
	   	   	for(m=0;m<10;m++)
	   	   	{str2[m]=strout[j][m];
	   	   	strout[j][m]=strout[i][m];
	   	   	strout[i][m]=str2[m];
				  }
	   	   	
		}
	   }//�����ִ����Ӵ�С����
	   
	  if(num[0]>num[1])
	  printf("%s %d",strout[0],num[0]);
	  else
	  {
	  	i=0;
	  	
	    while(num[i]==num[i+1])               //�ֵ���ԽС��ascii��ԽС 
	    {
	    	if(strout[i][0]<strout[i+1][0])
	    		for(m=0;m<10;m++)
	    		{
	    			str2[m]=strout[i][m];
			        strout[i][m]=strout[i+1][m];
			        strout[i+1][m]=str2[m];
				}
		i++;
		}
		
		printf("%s %d",strout[0],num[0]);
	  }
	   
	  
	  return 0;
	    
	    
	
	
	
}

