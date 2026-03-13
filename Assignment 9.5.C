Q. 5. Write a program to calculate sum of cubes of first N natural numbers


#include<stdlib.h>
int main()
{
    int a,n,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
      sum=sum+a*a*a;
    }
    printf("%d",sum);
    return 0;
}


Run... 


Enter a number5
225
[Process completed - press Enter]