#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
	int n,i,C,len,sg,num;
	char str[100]; 
	char *ptrSCU;
	
	
	scanf("%d",&n);
	
	if(n>=10)
	return 0;
	
	for(i=0;i<n;i++){
			scanf("%s",str);

		if(strlen(str)>100)
		return 0;
	
	

		if(strstr(str, "SCU")==NULL)
		sg=0;
		else
		sg=1;

		
		len=strlen(str) ; //获取字符串长度
        ptrSCU=strstr(str,"SCU"); //获取SCU的字串地址
        num=ptrSCU-str ;
        for(C=0;C<num;C++)
		{
        if(str[C]!='A' || str[len-C-1]!='A')
		{
		sg=0; //有SCU，但没有对称的A，不满足
		break;
	}
		else
		sg=1;
	}
	
	if(num!=(len-3)/2.0)
	sg=0;

	
	if(sg==1)
	printf("YES\n");
	else
	printf("NO\n");
}

	
	return 0;
}
	


		
		

