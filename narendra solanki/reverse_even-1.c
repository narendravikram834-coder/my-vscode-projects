#include<stdio.h>
#include<conio.h>
int main(){
    int n,i=2;
    printf("enter an even number :");
    scanf("%d",&n);
    while(n%2==0 && n>=i){
        printf("%d\n",n);
        n=n-2;
    }
    return 0;
}