//print table of n.
#include<stdio.h>
int main()
{
   int i,n;
   printf("Enter a Number-:");
   scanf("%d",&n);
   for(i=1;i<=10;i++)
   {

        printf("%d*%d=%d\n",n,i,i*n);
   }
    return 0;
}



