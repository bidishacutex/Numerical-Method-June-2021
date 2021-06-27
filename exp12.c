//ASSIGNMENT NO 12
//AIM: To Find Numerical Solution of Ordinary Differential Equations by Runge-Kutta Method
#include<stdio.h>
float f(float,float);
void main()
	{
	float x0=0,y0=1,h=0.1,k1,k2,k3,k4,k,x,y;
	int i=0;
	printf("\n Enter the value of x for which you need to find out y ");	
	scanf("%f",&x);
	while(x0!=x)
		{
		k1=h*f(x0,y0);
		k2=h*f((x0+(h/2)),(y0+(k1/2)));
		k3=h*f((x0+(h/2)),(y0+(k2/2)));
		k4=h*f((x0+h),(y0+k3));
		k=(k1+(2*k2)+(2*k3)+k4)/6;
		printf("\nvalue of k1 is %f ",k1);
		printf("\nvalue of k2 is %f ",k2);
		printf("\nvalue of k3 is %f ",k3);
		printf("\nvalue of k4 is %f ",k4);
		printf("\nvalue of k is %f ",k);
		printf("\nvalue of x%d is %f ",i,x0);
		printf("\nvalue of y%d is %f ",i,y0);
		x0=x0+h;
		y0=y0+k;
		i++;		
		}	
	printf("\nthe desired y is %f\n",y0);
	}
float f(float x,float y)
	{
	return x+(y*y);
	}
