#include<stdio.h>
#include<conio.h>
void hello();
void goodbye();
int main(){
    hello();
    goodbye();
    hello();
    return 0;
}
void hello(){
    printf("hello world\n");
}
void goodbye(){
    printf("goodbye\n");
}