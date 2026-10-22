#include<stdio.h>
#include<conio.h>
int main(){
    int n,i=1;
    printf("enter an odd number :");
    scanf("%d",&n);
    while(n%2==1 && n>=i){
        printf("%d\n",n);
        n=n-2;
    }
    return 0;
}