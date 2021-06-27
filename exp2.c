//ASSIGNMENT NO 2
//AIM: Algorithm for Newton’s backward method of interpolation
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<string.h>
void main()
{
    int n,i,j,k;
    float mx[10],my[10],x,x0=0,y0,sum,h,fun,p,diff[20][20],y1,y2,y3,y4; 
    //clrscr();
    printf("\n enter the no. of terms -    ");
    scanf("%d",&n);
    printf("\n enter the value in the form of x   -    ");
    for(i=0;i<n;i++)
    {
        printf("\n enter the value of x%d-    ",i+1);
        scanf("%f",&mx[i]);
    }
    printf("\n enter the value in the form of y -    ");
    for(i=0;i<n;i++)
    {
        printf("\nn enter the value of y%d-   ",i+1);
        scanf("%f",&my[i]);
    }
    printf("\n enter the value of x for"); 
    printf("\nwhich you want the value of of y -");
    scanf("%f",&x);h=mx[1]-mx[0]; 
    for(i=0;i<n-1;i++)
    {
        diff[i][1]=my[i+1]-my[i];
    }
    for(j=2;j<=4;j++)
    {
        for(i=0;i<n-j;i++)
        {
            diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
        }
    }
    i=0;
    while(!mx[i]>x)
    {
        i++;
    }
    x0=mx[i];
    sum=0;
    y0=my[i];
    fun=1; 
    p=(x-x0)/h; 
    sum=y0; 
    for(k=1;k<=4;k++)
    {
    	fun=(fun*(p-(k-1))/k); 
    	sum=sum+fun*diff[i][k];
    }
    printf("\n when x=%6.4f,y=%6.8f",x,sum); 
    printf("\n press enter to exit");
    getch();
}
