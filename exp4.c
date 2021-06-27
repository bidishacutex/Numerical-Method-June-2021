//ASSIGNMENT NO 4
//AIM: To integrate numerically using trapezoidal rule.
#include<stdio.h>
float f(float);
void main()
	{
	int n,i;
	float xu,xl,y=0,h;
	printf("Enter the number of sub-intervals\n");
	scanf("%d",&n);
	printf("enter the lower limit for x\n");
	scanf("%f",&xl);
	printf("enter the upper limit for x\n");
	scanf("%f",&xu);
	h=(xu-xl)/n;
	for(i=0;i<=n;i++)
		{
		if(i!=0 && i!=n)
		y+=2*f(xl+i*h);
		else if(i==0) y+=f(xl);
		else y=y+f(xu);	
		}
	printf("\ny=%f",y);
	printf("\nThe result according to trapezoidal rule is %f ",y*(h/2));
	}
	float f(float x)
	{
	return ((4*x)-(3*x*x));
	}
