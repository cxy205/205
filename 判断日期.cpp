#include<stdio.h>
#include<string.h>

int main()
{
	int A,B,C,S1[12]={31,28,31,30,31,30,31,31,30,31,30,31},S2[12]={31,29,31,30,31,30,31,31,30,31,30,31},D=0,i,sg=0;
	
	scanf("%d/%d/%d",&A,&B,&C);
	
	if(A>12||A==0)
	{
		switch(B)
		{
			case 1:{
				printf("January");
				break;
			}
			case 2:{
				printf("February");
				break;
			}
			case 3:{
				printf("March");
				break;
			}
			case 4:{
				printf("April");
				break;
			}
			case 5:{
				printf("May");
				break;
			}
			case 6:{
				printf("June");
				break;
			}
			case 7:{
				printf("July");
				break;
			}
			case 8:{
				printf("August"); 
				break;
			}
			case 9:{
				printf("September");
				break;
			}
			case 10:{
				printf("October");
				break;
			}
			case 11:{
				printf("November");
				break;
			}
			case 12:{
				printf("December");
				break;
			}
		}
		if(A<10)		
		printf(" %d, 200%d",C,A);
		else
		printf(" %d, 20%d",C,A);		
	}
	
	
	    switch(B)
		{
			case 1:{
				if(C>31||C==0)
				sg=2;
				else
				sg=1;
				break;
			}
			case 2:{
			   if(A%4!=0)
			   {
			   	if(C>28||C==0)
			   sg=2;
				else
				sg=1;
				break;
			   }
				
			   else
			   {
			   	 if(C>29||C==0) 
			   	 sg=2;
			    else
				sg=1;
				break;
			   }
			}
			case 3:{
				if(C>31||C==0)
			    sg=2;
				else
			    sg=1;
				break;
			}
			case 4:{
				if(C>30||C==0)
				sg=2;
				else
				sg=1;
				break;
			}
			case 5:{
				if(C>31||C==0)
				sg=2;
				else
				sg=1;
				break;
			}
			case 6:{
				if(C>30||C==0)
				sg=2;
				else
				sg=1;
				break;
			}
			case 7:{
				if(C>31||C==0)
				sg=2;
				else
				sg=1;
				break;
			}
			case 8:{
				if(C>31||C==0)
				sg=2;
				else
				sg=1;
				break;
			}
			case 9:{
				if(C>30||C==0)
				sg=2;
				else
				sg=1;
				break;
			}
			case 10:{
				if(C>31||C==0)
				sg=2;
				else
				sg=1;
				break;
			}
			case 11:{
				if(C>30||C==0)
				sg=2;				
				else
				sg=1;
				break;
			}
			case 12:{
				if(C>31||C==0)
				sg=2;
				else
				sg=1;
				break;
			}
		}
		
		if(sg==2||B>12)
		switch(A)
		{
			case 1:{
					if(C<10)
						printf("January %d, 200%d",B,C);
					else
					   	printf("January %d, 20%d",B,C);
				break;
			}
			case 2:{
			   		if(C<10)
			   		printf("February %d, 200%d",B,C);
			   		else
			   		printf("February %d, 20%d",B,C);
					break;
			   }
				
		   	case 3:{
					if(C<10)
					printf("March %d, 200%d",B,C);
					else
					printf("March %d, 20%d",B,C);	
				break;
			}
			case 4:{
					if(C<10)
					printf("April %d, 200%d",B,C);
					else
				    printf("April %d, 20%d",B,C);		
				break;
			}
			case 5:{
					if(C<10)
				     printf("May %d, 200%d",B,C);		
					 else
					 printf("May %d, 20%d",B,C);	
				break;
			}
			case 6:{
					if(C<10)
					printf("June %d, 200%d",B,C);
					else
					printf("June %d, 20%d",B,C);	
				break;
			}
			case 7:{
					if(C<10)
						printf("July %d, 200%d",B,C);
						else
					    printf("July %d, 20%d",B,C);
					break;
			}
			case 8:{
				if(C<10)
						printf("August %d, 200%d",B,C);
					else
					    printf("August %d, 20%d",B,C);
				break;
			}
			case 9:{
				if(C<10)
					printf("September %d, 200%d",B,C);
					else
					printf("September %d, 20%d",B,C);
				break;
			}
			case 10:{
				if(C<10)
				printf("October %d, 200%d",B,C);
				else
				printf("October %d, 20%d",B,C);
				break;
			}
			case 11:{
				if(C<10)
				printf("November %d, 200%d",B,C);
				else
				printf("November %d, 20%d",B,C);
				break;
			}
			case 12:{
				if(C<10)
				printf("Demcember %d, 200%d",B,C);
				else
				printf("Demcember %d, 20%d",B,C);
				break;
			}
		}
	
	
	if(sg==1&&A>0&&A<13)
	  {
	  if(C>A+1)
	  	  {
			for(i=A+1;i<C;i++)
			 if(i%4==0)
			 D=D+366;
			 else
			 D=D+365;
			 
			 if(A%4!=0)
			 {
			 	for(i=B;i<12;i++)
			     D=D+S1[i];
			     D=D+S1[B-1]-C;
			 } 
			 else
			 {
			 	for(i=B;i<12;i++)
			     D=D+S2[i];
			     D=D+S2[B-1]-C;
			 }
			  
			  
			 if(C%4!=0)
			 {
		       for(i=0;i<A-1;i++)
			    D=D+S1[i];
			    D=D+B;
			 }
			 else
			 {
			   for(i=0;i<A-1;i++)
			   D=D+S2[i];
			   D=D+B;			  
			 }			  
	      }
	  
	  if(C+1<A)
	  	 {
			for(i=C+1;i<A;i++)
			 if(i%4==0)
			 D=D+366;
			 else
			 D=D+365;
			 
			 if(C%4!=0)
			 {
			 	for(i=A;i<12;i++)
			     D=D+S1[i];
			     D=D+S1[A-1]-B;
			 } 
			 else
			 {
			 	for(i=A;i<12;i++)
			     D=D+S2[i];
			     D=D+S2[A-1]-B;
			 }
			  
			  
			 if(A%4!=0)
			 {
		       for(i=0;i<B-1;i++)
			    D=D+S1[i];
			    D=D+C;
			 }
			 else
			 {
			   for(i=0;i<B-1;i++)
			   D=D+S2[i];
			   D=D+C;			  
			 }			  
	      }
	      
	  if(C+1==A)
	  {
	  	      if(C%4!=0)
			 {
			 	for(i=A;i<12;i++)
			     D=D+S1[i];
			     D=D+S1[A-1]-B;
			 } 
			 else
			 {
			 	for(i=A;i<12;i++)
			     D=D+S2[i];
			     D=D+S2[A-1]-B;
			 }
			  
			  
			 if(A%4!=0)
			 {
		       for(i=0;i<B-1;i++)
			    D=D+S1[i];
			    D=D+C;
			 }
			 else
			 {
			   for(i=0;i<B-1;i++)
			   D=D+S2[i];
			   D=D+C;			  
			 }			 
	  }
	  
	  if(A+1==C)
	  {
	  	    if(A%4!=0)
			 {
			 	for(i=B;i<12;i++)
			     D=D+S1[i];
			     D=D+S1[B-1]-C;
			 } 
			 else
			 {
			 	for(i=B;i<12;i++)
			     D=D+S2[i];
			     D=D+S2[B-1]-C;
			 }
			  
			  
			 if(C%4!=0)
			 {
		       for(i=0;i<A-1;i++)
			    D=D+S1[i];
			    D=D+B;
			 }
			 else
			 {
			   for(i=0;i<A-1;i++)
			   D=D+S2[i];
			   D=D+B;			  
			 }		
	  }
	  
	  if(A==C)
	  {
	  	if(A==1)
	  	return 0;
	  	else
	  	D=0;
	  }
	  
	  printf("%d",D);
}

return 0;
}
