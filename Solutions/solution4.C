/*wap to enter any number and check its an armstrong number or not
date:27/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0,d;
	clrscr();
	printf("\n Enter any value:");
	scanf("%d",&a);
	d=a;
	while(a>0)
	{
		b=a%d;
		c=c+b*b*b;
		a=a/10;
	}
	if(d==c)
	printf("\n it is an armstrong number");
	else
	printf("\n it is not an armstrong number");
	getch();
}