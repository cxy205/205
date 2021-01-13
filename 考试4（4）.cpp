#include<stdio.h>
#include<string.h> 
int main()
{
	char str[100];
	int len;
	fgets(str,100,stdin);
	len=strlen(str);
	printf("%d",len-1);
	return 0;
 } 
