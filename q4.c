//print odd number n times.
#include<stdio.h>
int main()
{
   int i,n;
   printf("Enter a Number-:");
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {

        printf("%d\n",2*i-1);
   }
    return 0;
}


