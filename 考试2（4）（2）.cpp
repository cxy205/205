#include<stdio.h>
int main()
{
    int x,newed,t,n,i;
    i=0;
    scanf("%d",&t);
    while(i<t)
    {
	    scanf("%d",&x);
	    if(x==EOF)
	    return 0;
        newed=0;
        n=x;
        i+=1;
        do
        {
            newed=newed*10+x%10;
            x/=10;
        }while(x>0);
        if(n==newed)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
