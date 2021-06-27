//ASSIGNMENT NO 8
//AIM: To Solve The System Of Linear Equations Using Gauss - Seidal Iteration Method
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int n,i,j,k;
double *vars,**a,err=0.001,t,sum,temp;
printf("\nEnter the no .of unknowns:\n");
scanf("%d",&n);
a=(double**)calloc(n,sizeof(double*));
vars=(double*)calloc(n,sizeof(double));
for(i=0;i<n;i++)
	a[i]=calloc(n+1,sizeof(double));
printf("\nEnter the augmented matrix:\n");
for(i=0;i<n;i++)
	for(j=0;j<n+1;j++)
		scanf("%lf",&a[i][j]);
printf("\nEnter initial approximation:\n");
for(i=0;i<n;i++)
	scanf("%lf",&vars[i]);
do
{
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
			if(i!=j)
				sum+=(vars[j]*a[i][j]);
		t=(a[i][n]-sum)/a[i][i];
		temp=fabs(t-vars[i]);
		vars[i]=t;
	}
}while(temp>=err);
for(k=0;k<n;k++)
	 printf("\n%c = %0.2lf",97+k,vars[k]);
return 0;
}
