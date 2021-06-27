//ASSIGNMENT NO 10
//AIM: To  Find  out  the  root  of  the  Algebraic  and  Transcendental equations using Newton-Raphson method
#include<stdio.h>
#include<math.h>
float f(float);
float fdiff(float);
void main()
	{
	int k,j=1;
	float x,a,b,i,xit[100];
	while(f(i)*f(i+1)>0 || f(i)*f(i+1)==0) //to check if root is i or not
		{
		if(f(i)==0)
			{
			x=i;
			goto line;	
			}
		else if(f(i+1)==0)
			{
			x=i+1;
			goto line;
			}
		else	i++;
		}
	x=i;
	xit[0]=x;
	while(f(x)!=0)
		{
		printf("\niteration %d",j);
		printf("\n Value of x is %f",x);
		printf("\n Value of f(x) is %f",f(x));	
		x=x-(f(x)/fdiff(x));
		xit[j]=x;	
		printf("\nj=%d and xit[%d]=%f and xit[%d]=%f and fabs(xit[j-1]-xit[j])=%f",j,j-1,xit[j-1],j,xit[j],fabs(xit[j-1]-xit[j]));
		if(fabs(xit[j-1]-xit[j])<0.0001)
			{
			printf("\n %d",j);
			break;
			}
		j++;  //going for next iteration
		}		
	for(k=0;k<=j;k++)
		{
		printf("\nvalue of x%d is %f",k,xit[k]);
		}
	line: printf("\nvalue of real root is %f\n",x);
	}
float f(float x)
	{
	return((x*x*x)-(4*x)-9);
	}
float fdiff(float x)
	{
	return((3*x*x)-4);
	}
