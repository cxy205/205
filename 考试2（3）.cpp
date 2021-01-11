#include<stdio.h>
#include<string.h>
int main() 
{
	int M,i,j,len;
	char str[200]={'\0'},B;
	
	scanf("%d\n",&M);
	if(M<0)
	return 0;
	
	fgets(str,200,stdin);
	len=strlen(str);
	if(len<10||(len=10&str[0]<2)||(len=10&(str[0]=2)&(str[1]<1))||(len=10&(str[0]=2)&(str[1]=1)&(str[2]<4))||(len=10&(str[0]=2)&(str[1]=1)&(str[2]=4)&(str[3]<7))||(len=10&(str[0]=2)&(str[1]=1)&(str[2]=4)&(str[3]=7)&(str[4]<4))||(len=10&(str[0]=2)&(str[1]=1)&(str[2]=4)&(str[3]=7)&(str[4]=4)&(str[5]<8))||(len=10&(str[0]=2)&(str[1]=1)&(str[2]=4)&(str[3]=7)&(str[4]=4)&(str[5]=8)&(str[6]<3))||(len=10&(str[0]=2)&(str[1]=1)&(str[2]=4)&(str[3]=7)&(str[4]=4)&(str[5]=8)&(str[6]=3)&(str[7]<6))||(len=10&(str[0]=2)&(str[1]=1)&(str[2]=4)&(str[3]=7)&(str[4]=4)&(str[5]=8)&(str[6]=3)&(str[7]=6)&(str[8]<4))||(len=10&(str[0]=2)&(str[1]=1)&(str[2]=4)&(str[3]=7)&(str[4]=4)&(str[5]=8)&(str[6]=3)&(str[7]=6)&(str[8]=4)&(str[9]<7))||(len=10&(str[0]=2)&(str[1]=1)&(str[2]=4)&(str[3]=7)&(str[4]=4)&(str[5]=8)&(str[6]=3)&(str[7]=6)&(str[8]=4)&(str[9]=7)))
	;
	else
	return 0;
	
	for(j=0;j<M;j++){
	B=str[len-2];
	for(i=len-2;i>0;i--)
	{
		if(str[i]<0x30||str[i]>0x39)
		return 0;
		
		str[i]=str[i-1];
	} 
	str[i]=B;
	}	
	printf("%s",str);

	return 0;
}
