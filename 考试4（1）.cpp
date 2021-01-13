#include <stdio.h>

int main() {

    int n, i;

    scanf("%d", &n);  // 有n组数据

    for (i = 0; i < n; i++) {

        int a, b, c, d;

 

        // 读入4个整数，对这4个整数排序，并输出结果

        // 请将排序代码写在这里，不能使用循环语句
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
