/*write a program to print sum of 1 to 5 digit
date:16/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,sum=0
	a=1;
	clrscr();
	while(a<=5)
	{
	    sum=sum+a;
	    a=a+1;
	    //print("\n sum is %d",sum);
	}
	printf("\n Sum of 1 to 5 number is : %d",sum);
	getch();
}





