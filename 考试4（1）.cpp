#include <stdio.h>

int main() {

    int n, i;

    scanf("%d", &n);  // ��n������

    for (i = 0; i < n; i++) {

        int a, b, c, d;

 

        // ����4������������4���������򣬲�������

        // �뽫�������д���������ʹ��ѭ�����
        int A,B,C,D;
        scanf("%d %d %d %d",&a,&b,&c,&d);
       int n;
        
       if(b<a)
       {
	   n=a;
       a=b;
       b=n;
	   }
       
       if(c<a)
       {
       	n=a;
       	a=c;
       	c=n;
	   }
        
       if(c<b)
       {
       	n=b;
       	b=c;
       	c=n;
	   }
	   
	   if(d<a)
	   {
	   	n=a;
       a=d;
       d=n; 
	   }
	   
	   if(d<b)
	   {
	   	n=b;
       	b=d;
       	d=n;
	   }
	   
	   if(d<c)
	   {
	   	n=d;
       d=c;
       	c=n;
	   }
	   
	   printf("%d %d %d %d\n",a,b,c,d);

    }

   

    return 0;

}
