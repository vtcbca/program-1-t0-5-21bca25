#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter the number to check prime:");
	scanf("%d",&a);
	for(b=2;b<=a-1;b++)
	{
		if(a%b==0)
	{
		printf("Number is not prime");
		break;

	}
	}
	       if(a==b)
	{
		printf("Number is prime");
        }
		getch();
}
