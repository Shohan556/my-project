#include <stdio.h>
int main() {
    int a = 500;
    int b;
    int c;
    printf("Main balance:%d\n",a);
    printf("Enter your amount:");
    scanf("%d",&b);
    printf("Left balance : %d - %d = %d\n",a,b,a-b);
    printf("Deposit some money:");
    scanf("%d",&c);
    printf("Net Balance: %d-%d+%d=%d",a,b,c,a-b+c);
    return 0;}