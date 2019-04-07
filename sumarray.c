    
#include<stdio.h>
void getn(int *n)
 { 
     printf("Enter the number of elements\n");
     scanf("%d",n);

 }
 void input(int n,int a[])
 {  int i;
    for(i=0;i<n;i++)           
    {  
       printf("Enter the elements\n");
       scanf("%d",&a[i]);
    }  
 }
 int compute(int n, int a[])
 {   int sum=0;
     //int a[n];
     for(int i=0;i<n;i++)
     sum =sum+a[i];
     return sum;
}                   
void output(int sum)
{    
     printf("Sum is %d",sum);
     
 }
int main()
{     
      int n,sum=0;
      getn(&n);
      int a[n];
      input(n,a);
      sum=compute(n,a);
      output(sum); 

}
 
