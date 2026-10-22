#include<stdio.h>
#include<conio.h>
int main(){
    int i=0,num;
    printf("enter the value of num: ");
    scanf("%d",&num);
    do{
        printf("%d \n",i);
        i++;
    }
    while(i<=num);
    
    return 0;
}