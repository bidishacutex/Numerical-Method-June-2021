//ASSIGNMENT 3
//AIM: To implement Langrange’s Interpolation formula

#include<stdio.h>
int main()
{
int i,j,n;
float temp,x[10],y[10],x1,fx=0;
printf("\nEnter the number of data:\t");   scanf("%d",&n);
printf("\nEnter x- and y-values:\n");
for(i=0;i<n;i++)
        scanf("%f%f",&x[i],&y[i]);
printf("\nEnter the value of X:\n");  scanf("%f",&x1);
for(i=0;i<n;i++)
{
        temp=1;
        for(j=0;j<n;j++)
                if(i!=j)
                        temp*=(x1-x[j])/(x[i]-x[j]);
        fx+=temp*y[i];
}
printf("\nf(%0.3f)= %0.3f\n",x1,fx);
return 0;
}
