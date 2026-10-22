#include<stdio.h>
#include<conio.h>
int main(){
    int i=0 ,num;
    printf("enter the value of num: ");
    scanf("%d",&num);
    do{
        printf("%d \n",num);
        num--;
    }while(num>=i);

    return 0;
}