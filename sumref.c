    
#include<stdio.h>
 void input(int *a,int *b )
 {
     printf("Enter first number\n");
     scanf("%d",a);
     printf("Enter second number\n");
     scanf("%d",b); 
 }
 void compute(int a, int b, int *c)
 {
     //int *c;
     *c=a+b;
     ;
 }
 void output(int a, int b, int c)
 {    
     printf("%d+%d=%d",a,b,c);
 }
int main()
{
      int a,b,c;
      input(&a,&b);
      compute(a,b,&c);
      output(a,b,c); 

}
 
