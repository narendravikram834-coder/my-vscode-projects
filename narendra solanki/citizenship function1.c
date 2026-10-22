#include<stdio.h>
#include<conio.h>
void indian();
void french();
int main(){
    printf("enter i for indian and f for french\n");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        indian();

    }else{
        french();
    }
    return 0;
}
void indian(){
    printf("namaste\n");
}
void french(){
    printf("bonjour\n");
}