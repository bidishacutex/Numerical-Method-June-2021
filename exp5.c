//ASSIGNMENT NO 5
//AIM: To Integrate Numerically Using Simpson’s 1/3 rd Rule.
#include<stdio.h>
float f(float);
void main()
	{
	int n,i;
	float xu,xl,y,h;
	printf("Enter the number of intervals\n");
	scanf("%d",&n);
	printf("enter the lower limit for x\n");
	scanf("%f",&xl);
	printf("enter the upper limit for x\n");		
	scanf("%f",&xu);
	h=(xu-xl)/n;
	y=f(xu)+f(xl);
	for(i=1;i<n;i++)
		{
		if(i%2==0)
		y+=2*f(xl+i*h);
		else y+=4*f(xl+i*h);	
		}
	printf("\ny=%f",y);
	printf("\nThe result according to simpson's rule is %f ",y*(h/3));
	}
float f(float x)
	{
	return ((4*x)-(3*x*x));
	}
