//ASSIGNMENT NO 6
//AIM: To Integrate Numerically Using Weddle’s Rule.
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float);
 float f(float x)
  {
        float y;
        y=1/(1+x*x);
        return(y);
}                          
main()
{
      float a,b,h,s1=0,s2=0,s=0;
      int i,n,m;
      printf("Enter the value of upper limit= ");
      scanf("%f",&b);
       printf("Enter the value of lower limit= ");
      scanf("%f",&a);
       printf("Enter the value of n=");
      scanf("%d",&n);
      h=(b-a)/n;
      printf("h= %f",h);
      m=n/6;
      s=0;
      if(n%6==0)
   {
      for(i=1;i<=m;i++)
      {
          s=s+((3*h/10)*(f(a)+f(a+2*h)+5*f(a+h)+6*f(a+3*h)+f(a+4*h)+5*f(a+5*h)+f(a+6*h)));  
          a=a+6*h;  
          }
          printf("\nResult is : %f",s);
   }
          else
          {
              printf(" Weddle\'s rule is not applicable");
              }         
              getch();
 }
