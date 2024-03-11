#include<stdio.h>
int main()
{
    int i,n;
    int ldigit;
    int sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    int  dup=n;
    while(n>0)
      { ldigit=n%10;
        sum=sum+(ldigit*ldigit*ldigit);

        /* code */
      }
       if(dup==sum)
       printf("true");
       else
       printf("false");

      
}