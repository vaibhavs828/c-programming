    
#include<stdio.h>
void getn(int *n)
 { 
     printf("Enter the number of elements\n");
     scanf("%d",n);

 }
 void input(int n )
 {  int i, a[i];
    for(int i=0;i<n;i++)
    {  
       printf("Enter the elements\n");
       scanf("%d",a[i]);
    }  
 }
 int compute(int sum,int n, int i)
 {   sum=0;
     int a[i];
     for(int i=0;i<n;i++)
     sum =sum+a[i];
     return sum;
}
void output(int sum)
{    
     printf("The sum is %d",sum);
     
 }
int main()
{     
      int n,i,a,sum;
      input(n);
      compute(sum,n,i);
      output(sum); 

}
