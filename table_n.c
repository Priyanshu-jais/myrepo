#include<stdio.h>
int main()
{
    int mul[10];
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
   for(int i=0;i<10;i++)
   {
    mul[i]=n*(i+1);
   } 
   for(int i=0;i<10;i++)
   {
    printf("%d*%d=%d\n",n,i+1,mul[i]);
   } 
   printf("So, Here table printed.");
    return 0;
}