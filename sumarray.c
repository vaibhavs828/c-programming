    
#include<stdio.h>
void getn(int *n)
 { 
     printf("Enter the number of elements\n");
     scanf("%d",n);

 }
 void input(int n,int a[n] )
 {
    for(int i=0;i<n;i++)
    {  
       printf("Enter the elements\n");
       scanf("%d",a[i]);
    }  
 }
 int compute(int a[n],int sum,int n)
 {   sum=0;
     for(int i=0;i<n;i++)
     sum =sum+a[i];
     return sum;
}
void output(int sum)
{    
     printf("The sum is %d",&sum);
     
 }
int main()
{     
      input(&n,i,a);
      compute(a[n],sum);
      output(sum); 

}
