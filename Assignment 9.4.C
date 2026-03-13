Q. 4. Write a program to calculate sum of squares of first N natural numbers




#include<stdlib.h>
int main()
{
    int a,n,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
      sum=sum+a*a;
    }
    printf("%d",sum);
    return 0;
}


run... 

Enter a number5
55
[Process completed - press Enter]