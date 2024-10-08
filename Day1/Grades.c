//grading students on the base of their marks
#include <stdio.h>
int main(){
    int marks;
    printf("enter marks of the  student :");
    scanf("%d",&marks);

    if(101>marks && marks>=90){
        printf("Grade A\n");
    }
    else if(80<=marks && marks<90){
        printf("Grade B\n");
    }
     else if(70<=marks && marks<80){
        printf("Grade C\n");
    }
     else if(60<=marks && marks<70){
        printf(" Grade D\n");
    }
    else if(marks<60){
        printf("FAIL\n");
    }else{
        printf("enter a valid mark");
    }
    return 0;
}