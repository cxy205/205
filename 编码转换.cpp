#include <stdio.h>
#include <string.h>
#include <Windows.h>

 char* G2U(const char* gb2312);
 char* U2G(const char* utf8);
int main()

{
	char s[80];
	int i,c,b;
	char *pt,*pt1;
	printf("请输入车牌号："); 
	scanf("%s",s);
	printf("GB2312编码："); 
	c=strlen(s);
	
	for(i=0;i<c;i++){
	 printf("%X",(unsigned char)s[i]); 
    }

	 pt=G2U(s);
	 printf("\nUTF8输出编码:");
	 b=strlen(pt);
	 for(i=0;i<b;)

	 	if((unsigned char)pt[i]>127)
	 	
         {
		 printf("%X%X%X",(unsigned char)pt[i],(unsigned char)pt[i+1],(unsigned char)pt[i+2]);
         i+=3;
        }
        else
     {   printf("%X",(unsigned char)pt[i]);
         i++;
     }
	 
	//* pt1=U2G(pt);
	//*引用程序转换不同编码 
	 delete pt;
	return 0;

}

   char* G2U(const char* gb2312)
     {
      int len = MultiByteToWideChar(CP_ACP, 0, gb2312, -1, NULL, 0);
      wchar_t* wstr = new wchar_t[len+1];
      memset(wstr, 0, len+1);
      MultiByteToWideChar(CP_ACP, 0, gb2312, -1, wstr, len);
      len = WideCharToMultiByte(CP_UTF8, 0, wstr, -1, NULL, 0, NULL, NULL);
      char* str = new char[len+1];
      memset(str, 0, len+1);
      WideCharToMultiByte(CP_UTF8, 0, wstr, -1, str, len, NULL, NULL);
      if(wstr) delete[] wstr;
      return str;
     }
     
     
     char* U2G(const char* utf8)
   {
    int len = MultiByteToWideChar(CP_UTF8, 0, utf8, -1, NULL, 0);
    wchar_t* wstr = new wchar_t[len+1];
    memset(wstr, 0, len+1);
    MultiByteToWideChar(CP_UTF8, 0, utf8, -1, wstr, len);
    len = WideCharToMultiByte(CP_ACP, 0, wstr, -1, NULL, 0, NULL, NULL);
    char* str = new char[len+1];
    memset(str, 0, len+1);
    WideCharToMultiByte(CP_ACP, 0, wstr, -1, str, len, NULL, NULL);
    if(wstr) delete[] wstr;
     return str;
   }
