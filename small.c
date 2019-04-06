    
#include<stdio.h>
 void input(int a,int b, int c )
 {
     printf("Enter first number\n");
     scanf("%d",&a);
     printf("Enter second number\n");
     scanf("%d",&b); 
     printf("Enter third number\n");
     scanf("%d",&c);
 }
 int compute(int a, int b, int c )
 {  if(a>b)
     {
         a=b;
     }
     
    
         if(a>c)
     {
         a=c;
     }
        return a;
}
     
 void output(int a)
 {    
     printf("The smallest number is %d",&a);
     
 }
int main()
{
      int a,b,c;
      input(a,b,c);
      compute(a,b,c);
      output(a); 

}
 
