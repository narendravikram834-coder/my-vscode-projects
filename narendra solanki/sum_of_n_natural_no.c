#include<stdio.h>
#include<conio.h>
       int main(){
       int i=1,sum=0,n;
       printf("enter the value of n: ");
       scanf("%d",&n);
       for(i; i<=n ; i++){
       sum=sum+i;
      }printf("sum is: %d", sum);
      return 0;
   }