#include<stdio.h>
#include<math.h>
int main (void)
{
	int day, month, year,i,b,m;
	double a;
	printf("ÇëÊäÈëÈÕÆÚ£¨day month year)£º");
	scanf("%d %d %d",&day ,&month ,&year);
	switch(day)
	{
		case 1:
		case 11:
		case 21:
		case 31: printf("%dst",day);
		         break;
		case 2:
		case 12:
		case 22:printf("%dnd",day);
		        break;
		case 3:
		case 13:
		case 23:printf("%drd",day);
		        break;
		default:printf("%dth",day);
		        break;	 
	}
	switch(month)
	{
		case 1:printf("Jan.");
		       break;
	    case 2:printf("Fed.");
		       break;
	    case 3:printf("March");
		       break;
	    case 4:printf("April");
		       break;
	    case 5:  printf("May");       
		       break;
        case 6:  printf("June");      
		       break;
        case 7:  printf("July");   
		       break;
        case 8:  printf("Aug.");
		       break;
        case 9:  printf("Sep.");
		       break;
        case 10: printf("Oct.");  
		       break;
        case 11: printf("Nov.");
		       break;
        case 12: printf("Dec.");
		       break;
	}
	printf("%d\n\r",year);
	a=(year-2020)/4.0;
	if(a>=0)
{
	 if((year-2020)%4==0)
	{
		a=ceil(a);
	 switch(month)
	  {
	    case 1:b=0;
		       break;
	    case 2:b=31;
		       break;
	    case 3:b=60;
		       break;
	    case 4:b=91;
		       break;
	    case 5:b=121;       
		       break;
        case 6:b=152;      
		       break;
        case 7:b=182;   
		       break;
        case 8:b=213;
		       break;
        case 9:b=244;
		       break;
        case 10:b=274;  
		       break;
        case 11:b=305;
		       break;
        case 12:b=335;
		       break;
      }
      i=(year-2020)*365+a+b+day;
	  m=(i-1)%7;
	}
	else
	{
		switch(month)
	 {
	    case 1:b=0;
		       break;
	    case 2:b=31;
		       break;
	    case 3:b=59;
		       break;
	    case 4:b=90;
		       break;
	    case 5:b=120;       
		       break;
        case 6:b=151;      
		       break;
        case 7:b=181;   
		       break;
        case 8:b=212;
		       break;
        case 9:b=243;
		       break;
        case 10:b=273;  
		       break;
        case 11:b=304;
		       break;
        case 12:b=334;
		       break;
     }
	   i=(year-2020)*365+a+b+day;
	   m=(i-1)%7;
	}
    switch(m)
    {
    	case 0:printf("Wednesday");
    	       break;
    	case 1:printf("Tursday");
    	       break;
    	case 2:printf("Firday");
    	       break;
    	case 3:printf("Saturday");
    	       break;
    	case 4:printf("Sunday");
    	       break;
    	case 5:printf("Monday");
    	       break;
    	case 6:printf("Tuesday");
    	       break;
	}
}
	
    else	
{
		if((year-2020)%4==0)
	{
		a=ceil(a);
	 switch(month)
	  {
	    case 1:b=0;
		       break;
	    case 2:b=31;
		       break;
	    case 3:b=60;
		       break;
	    case 4:b=91;
		       break;
	    case 5:b=121;       
		       break;
        case 6:b=152;      
		       break;
        case 7:b=182;   
		       break;
        case 8:b=213;
		       break;
        case 9:b=244;
		       break;
        case 10:b=274;  
		       break;
        case 11:b=305;
		       break;
        case 12:b=335;
		       break;
      }
      i=(year-2020)*365+a+b+day;
	  m=abs(i-1)%7;
	}
	else
	{
		switch(month)
	 {
	    case 1:b=0;
		       break;
	    case 2:b=31;
		       break;
	    case 3:b=59;
		       break;
	    case 4:b=90;
		       break;
	    case 5:b=120;       
		       break;
        case 6:b=151;      
		       break;
        case 7:b=181;   
		       break;
        case 8:b=212;
		       break;
        case 9:b=243;
		       break;
        case 10:b=273;  
		       break;
        case 11:b=304;
		       break;
        case 12:b=334;
		       break;
     }
	   i=(year-2020)*365+a+b+day;
	   m=abs(i-1)%7;
	}

    switch(m)
    {
    	case 0:printf("Wednesday");
    	       break;
    	case 1:printf("Tuesday");
    	       break;
    	case 2:printf("Monday");
    	       break;
    	case 3:printf("Sunday");
    	       break;
    	case 4:printf("Saturday");
    	       break;
    	case 5:printf("Firday");
    	       break;
    	case 6:printf("Thursday");
    	       break;
	}
} 
	   
	return 0; 
	
 } 
