//统计一段文本中出现次数最多的英文单词。单词不区分大小写，即“Hello”和“hello”表示同一个单词。单词和单词之间由一个或多个非字母字符隔开。
//输入数据为一段文本，可能包含若干行，直到文件末尾(EOF)为止。即只有一组测试用例。 
//输出该段文本中出现最多的单词(全变换成小写字母)，及该单词出现的次数，中间用空格隔开。如果出现次数最多的单词有多个，输出字典序最大(全转换成小写字母比较)的那个。
//注意退出条件 
//单独使用一个数列计数 
//注意字典序 
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
	}//将所用单词换成小写形式并单独列出 
	
	for(i=0;i<n;i++)
	  for(j=0;j<i;j++)
	  {
	  	if(strcmp(strout[i],strout[j])==0)
	  	{
		  for(m=i;m<=n;m++)
		    for(p=0;p<10;p++)
		    {
		    	strout[m][p]=strout[m+1][p];  //删除后面的重复单词
			}
		  num[j]=num[j]+1;//计数 
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
	   }//按出现次数从大到小排序
	   
	  if(num[0]>num[1])
	  printf("%s %d",strout[0],num[0]);
	  else
	  {
	  	i=0;
	  	
	    while(num[i]==num[i+1])               //字典序越小，ascii码越小 
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

