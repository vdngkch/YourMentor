// program to swap the values of two variables 
#include<stdio.h>
void swap(int a,int b);
int main(){
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);

    printf("enter value of b:");
    scanf("%d",&b);

    swap(a,b);
    return 0;

}
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swapping a = %d, b = %d",a,b);
}
