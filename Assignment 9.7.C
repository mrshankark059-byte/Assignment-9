Q. 7 Write a program to count digits in a given number


#include<stdio.h>
int main()
{
  int a,count=0;
  printf("Enter a number");
  scanf("%d",&a);
  while(a) 
  {
   a=a/10;
   count++;
  }
  printf("digit count=%d",count);
    return 0;
}


run.... 


Enter a number123456
digit count=6
[Process completed - press Enter]