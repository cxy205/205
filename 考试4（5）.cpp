//����ֻ��һ�в�����������ѡ��ʹ��fgets��������
//���ȴ�ͷ��β�Զ����ַ������м�������Ӣ����ĸ����뵥����ѭ�������������ʡ�
//��¼ÿ�����ʵĿ�ʼ��ַ�ͽ�����ַ�������ʵ��򴢴�
//��ӡ��������ַ��� 

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
    
