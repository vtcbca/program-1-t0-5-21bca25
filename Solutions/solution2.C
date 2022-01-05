#include<stdio.h>
#include<conio.h>
void main()
{
	int a,c=0,r;
	clrscr();
	printf("\n Enter any number);
	scanf("%d",&a);
	a=c;
	while(a>0)
	{
		r=a%10;
		c=c*10+r;
		a+a/10;
	}
	printf("\n Reverse number is %d",c);
	getch();
}