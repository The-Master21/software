#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<process.h>
int main()
{
int a, b, c;
clrscr();
printf("Enter three sides of the triangle"); scanf("%d%d%d", &a, &b, &c); if((a<b+c)&&(b<a+c)&&(c<a+b))
{

if((a==b)&&(b==c))
{
printf("Equilateral triangle");
}
else if((a!=b)&&(a!=c)&&(b!=c))
{
printf("Scalene triangle");
}
else
 printf("Isosceles triangle");

                                }
                     else
                     {
                        	 printf("triangle cannot be formed");
                     } getch(); return 0;
}
