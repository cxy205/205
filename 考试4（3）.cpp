//ע������ʱ�����ļ���ʽ���룬��ʹ��fgets��������ʱ��ѵ�һ�еĻ��з�¼�룬���ѭ���������ᷢ���ı�
// ע���ӡ�����β�Ƿ��пո� 
//һ��ע����������д���ѭ���ṹ��֮�������������֮ǰ����ĸ��ǵ���һ��Ҫ���� 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,i,j,m,a=0,b=0,c,num=0,ODD[500],EVEN[500];
	char NUM[500]={};
	scanf("%d\n",&n);

	for(j=0;j<2*n-1;j++)
	{
	for(i=0;i<500;i++)
	{
		ODD[i]=0;
		EVEN[i]=0;
		NUM[i]='\0';
	 } 
	 a=0; b=0;//�������� 
     
	fgets(NUM,500,stdin);
	for(i=0;i<strlen(NUM);i++)
	{
	if(NUM[i]=='\n'||(NUM[i]==0x20&&NUM[i+1]==0x20))
	break;
	if(NUM[i]!=0x20)
	{
	 num=0;
	 for(m=i;;m++)
	 {
	 if(NUM[m]==0x20||NUM[m]=='\n')
	 break;
	 num=atoi(&NUM[i]);
	 }
	 i=m-1;
	if(num%2==0)
	{
	EVEN[a]=num;
	a++;
	}
	
	if(num%2!=0)
	{
	ODD[b]=num;
	b++;	
	}
	
	 
	}
	
	}

	
	//���벢���� 

	//����С���� 
	for(i=0;i<a;i++)
	{
		for(m=0;m<i;m++)
		{
			if(EVEN[i]<EVEN[m])
			{
				c=EVEN[i];
				EVEN[i]=EVEN[m];
				EVEN[m]=c;
			}
		}
	}
	
	for(i=0;i<b;i++)
	{
		for(m=0;m<i;m++)
		{
			if(ODD[i]<ODD[m])
			{
				c=ODD[i];
				ODD[i]=ODD[m];
				ODD[m]=c;	
			 } 
		}
	}
	//��ӡ 
	if(b!=0&&a!=0){
		for(i=0;i<b;i++)
	{
		printf("%d ",ODD[i]);
	}
	
	    for(i=0;i<a-1;i++)
	{
		printf("%d ",EVEN[i]); 
	}
	    printf("%d",EVEN[i]);
	    printf("\n");
    }
     
     if(b!=0&&a==0){
     	
     	
     	for(i=0;i<b-1;i++)
	{
		printf("%d ",ODD[i]);
	}
	    printf("%d",ODD[i]);
	    printf("\n");
	 }
	 
	 if(b==0&&a!=0)
	 {
	 for(i=0;i<a-1;i++)
	{
		printf("%d ",EVEN[i]); 
	}
	    printf("%d",EVEN[i]);
	    printf("\n");
	 }
	
		

		
	}
	
	return 0;
}
	
	

