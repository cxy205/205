#include<stdio.h>

void C(int n,int val[20]);
int outval[20]={};
int index=0;
int main()
{
	int i,n,m,j,val[20]={};
	scanf("%d",&m);
	
	for(j=0;j<m;j++)
	{
		scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&val[i]);
		
		    C(n,val);
		
	}
	return 0;
}
void  C(int n,int val[20]){
    int val1[20]={};
 int ind;
    
	
   
    
    for(int k=0;k<n+1;k++){
        outval[index]=val[k];
        
	if(outval[index]==0){
    printf("--> ");
    for(int j=0;j<index;j++){
	if(outval[j]==0)
	continue;
	else{
	printf("%d ",outval[j]);
	}
	}
	printf("\n");
    return;} 
    
        index++; 
        ind=0;

        for(int j=k+1;j<n+1;j++){
            val1[ind]=val[j];
            ind++;
        } 
	
   
        C(n-1,val1);
       index--;
    }
    return;
 }
