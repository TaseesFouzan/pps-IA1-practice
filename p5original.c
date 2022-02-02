#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("Enter the number for which you want square root\n");
  scanf("%f",&n);
  return n;
}
  float my_sqrt(float n)
{
  float x=n/2;
  float a;
  a=0.5*(x+(n/x));
  while(fabs(x-a)>0.000001)
{
    x=a;
    a=0.5*(x+(n/x));
}
   return a;
} 
   void output(float n,float a)
{
   printf("The square root of %f is %f",n,a);
}    
   int main()
{
   float a,b;
   a=input();
   b=my_sqrt(a);
   output(a,b);
   return 0;
}   