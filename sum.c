    
#include<stdio.h>
 {
     printf("Enter first number\n");
     scanf("%d",a);
     printf("Enter second number\n");
     scanf("%d",b); 
 }
 int compute(int a, int b)
 {
     int c;
     c=a+b;
     return c;
 }
 void output(int a, int b, int c)
 {    
     printf("%d+%d=%d",a,b,c);
 }
int main()
{
      int a,b,c;
      input(&a,&b);
      c = compute(a,b);
      output(a,b,c); 

}
 void input(int *a, int *b)
