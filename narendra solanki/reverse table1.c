#include<stdio.h>
#include<conio.h>
int main(){
    int n,table;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        table=n*i;
        printf("%d\n",table);

    }
    return 0;
}