Q. 3. Write a program to calculate sum of first N odd natural numbers. 


#include<stdlib.h>
int main()
{ 
  int a,n,sum=0;
  printf("Enter a number");
  scanf("%d",&n);
  for(a=1;a<=n;a=a+2) 
  {
   sum=sum+a;
  }
  printf("sum=%d",sum);
    return 0;
}


run.... 


Enter a number9
sum=25
[Process completed - press Enter]
