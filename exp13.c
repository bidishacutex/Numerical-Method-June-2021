//ASSIGNMENT NO 13
//AIM: To  Find  out  the  root  of  the  Algebraic  and  Transcendental equations using Bisection method.
#include<stdio.h>
#include<math.h>
double f(double x)
{return ((x*x*x) -4*x -9); }
int main()
{
double a,b,err=0.001,x0,x1,x;
printf("\nEnter the interval: \n");
scanf("%lf%lf",&a,&b);

if(f(a)*f(b)>0)
        printf("\nNo roots exist in the interval\n");
else if(f(a)==0)
        printf("\nThe root is %0.3lf\n",a);
else if(f(b)==0)
        printf("\nThe root is %0.3lf\n",b);
else
{       x0=a;
        x1=b;
        do
        {
                x=(x0+x1)/2;
                if(f(x)*f(x0)<0)
                        x1=x;
                else if(f(x)*f(x1)<0)
                        x0=x;
        }
        while(fabs(f(x))>err);
        printf("\nRoot= %0.4lf\n",x);
}
return 0;
}