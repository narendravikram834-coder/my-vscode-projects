#include<stdio.h>
#include<conio.h>
int main(){
    int n,i=0;
    printf("enter an even number :");
    scanf("%d",&n);
    while(n%2==0 && i<=n){
        printf("%d \n",i);
            i=i+2;
    }   
    return 0;
}