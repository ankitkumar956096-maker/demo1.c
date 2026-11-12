#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if (a>c)
        printf("A is the largest number");
     else
      printf("C is the largest number");
    }
     else
     {
        if(b>c)
        printf("B is the largest number");
      else
        printf("C is the largest number");
     }
     return 0;
}