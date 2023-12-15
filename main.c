#include"header.h"
#include<stdio.h>
int main()
{
  int an;
printf("Welcome\n");
printf("Enter assignment Number : ");
scanf("%d",&an);
switch(an)
{
	case 1:
	a1();
	break;
	default: 
		printf("assignment not exist\n");
}
return 0;
}
