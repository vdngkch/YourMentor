//program that asks the user to input a year and checks if it's a leap year.
#include<stdio.h>
int leapYear(int year);

int main(){
    int year;
    printf("enter a year :");
    scanf("%d",&year);

     if (leapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    leapYear(year);
    return 0;

}
int leapYear(int year){
    (year % 4 == 0 && year % 100 !=0) || (year % 400 == 0);
   
}