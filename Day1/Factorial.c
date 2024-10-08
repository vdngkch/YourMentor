//program to find the factorial of a number
#include<stdio.h>
#include <math.h>
int main(){
    int n;
    int factorial=1;
    printf("enter a number :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        factorial *=i;
    }
    printf("factorial of %d is = %d \n",n,factorial);
}