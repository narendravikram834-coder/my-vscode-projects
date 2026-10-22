#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,j;
    printf("enter a number :");
    scanf("%d",&n);
    j=1;
        for(i=1;i<=n;i++){
            j=j*i;
        }
        printf("factorial of %d is %d",n,j);
        return 0;
} 