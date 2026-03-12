Q. 2. Write a program to calculate sum of first N even natural numbers. 


#include<stdlib.h>
int main()
{ 
  int a,n,sum=0;
  printf("Enter a number");
  scanf("%d",&n);
  for(a=1;a<=n;a++) 
  {
   sum=sum+a;
  }
  printf("sum=%d",sum);
    return 0;
}


Run.... 


Enter a number5
sum=15
[Process completed - press Enter]