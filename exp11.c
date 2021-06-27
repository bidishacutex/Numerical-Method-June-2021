//ASSIGNMENT NO 11
//AIM: TO FIND NUMERICAL SOLUTION OF ORDINARY DIFFERENTIAL EQUATIONS BY EULER’S METHOD
#include<stdio.h>
#include <math.h>
#include<conio.h>
//dy/dx = xy
#define F(x,y)    (x)*(y)
void main()
{
    double y1,y2,x1,a,n,h;
    int j;
    //clrscr();
    printf("\nEnter the value of range: ");
    scanf("%lf %lf",&a,&n);
    printf("\nEnter the value of y1: ");
    scanf("%lf",&y1);
    printf("\nnEnter the h: ");
    scanf("%lf",&h);
    printf("\nn    y1 = %.3lf ",y1);
    for(x1=a,j=2; x1<=n+h; x1=x1+h,j++)
    {
        y2= y1 + h * F(x1,y1);
        printf("\nn    x = %.3lf => y%d = %.3lf ",x1,j,y2);
        y1=y2;
    }
    getch();
}











