#include<stdio.h>
#include<conio.h>
int factorial(int x);
void main()
{
int num,fact;
clrscr();
printf("enter a number");
scanf("%d",&num);
factorial(&num);
printf("/nfactorial value=%d",fact);
getch();
}
int factorial(int *x)
{
int (*f)=1,i;
for(i=1;i<=(*x);i++)
{
*f=(*f)*i;
}
return *f;
}