#include<stdio.h>
int main(void)
 int n,sum,i;

n = 0;
	sum = 0;
	while (n < 10) {
	  scanf("%d", &i);
	  if (i == 0)
	    continue;/*���������0*/
	  sum += i;
	  n++;
	  /* continue jumps to here */
	}
	printf("��Ϊ��%d",i);
	return 0;


