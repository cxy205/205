#include<stdio.h>
#define N 10

int main()
{
   int row,col;
   double ident[row][col];
   
   for(row=0;row<N;row++){
   printf("\n");   
    for(col=0;col<N;col++)
 
	 if(col==row)
	  printf("1");
	 else
	  printf("0");
}

	 
	  
	return 0;   
	
}
