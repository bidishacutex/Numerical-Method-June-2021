//ASSIGNMENT NO 7
//AIM: To solve the system of linear equations using gauss elimination method
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*    --------------------------------------------------------    */
/*    Main program for algorithm    3.5  */
/*    remember : in C the fields    begin with element 0  */
#define N 4
void main(void)
{
    float a[N][N+1],x[N],t,s; int i,j,k;
    printf("Enter the element of the argumented matrix row wise\n");
    for(i=0;i<N;i++)
    for(j=0;j<N+1;j++)
    scanf("%f",&a[i][j]); for(j=0;j<N-1;j++) for(i=j+1;i<N;i++)
    {
        t=a[i][j]/a[j][j];
        for(k=0;k<N+1;k++)
        a[i][k]=a[j][k]*t;
    }
    printf("The upper triangular matrix is:\n");
    for(i=0;i<N;i++)
    for(j=0;j<N+1;j++)
    printf("%8.4f%",a[i][j]);
    printf("\n");
    for(i=N-1;i>=0;i--)
    {
        s=0;
        for(j=i+1;j<N;j++)
        s+=a[i][j]*x[j];
        x[i]=(a[i][N]-s)/a[i][i];
    }
    printf("The solution is :\n");
    for(i=0;i<N;i++)
    printf("x[%3d]=%7.4fn", i+1,x[i]);
}
