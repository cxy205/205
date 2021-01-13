//由于只有一行测试用例，可选择使用fgets函数读入
//首先从头到尾对读入字符串进行鉴别，遇到英文字母则进入单独的循环读入完整单词。
//记录每个单词的开始地址和结束地址，将单词倒序储存
//打印处理完的字符串 

#include<stdio.h>
#include<string.h>

int main()
{char str[100]={},str2[100]={};
    int i,m,len,start,j;

       	fgets(str,100,stdin);
    	
    	for(m=0;m<strlen(str);m++)
    	{
    		len=0;
    		start=m;
    		if((str[m]>=0x41&&str[m]<=0x5a)||(str[m]>=0x61&&str[m]<=0x7a))
    		{
    			for(;;m++)
    			{
    			if((str[m]>=0x41&&str[m]<=0x5a)||(str[m]>=0x61&&str[m]<=0x7a))
    			{
				str2[m]=str[m];
    			len++;
				}
				else
				break;
				
				}
    				
			
			}
		    
	
		for(j=0;j<len;j++)
			{
				str[j+start]=str2[start+len-j-1];
			}	
		}
		
		printf("%s",str);
	return 0;
}
    
