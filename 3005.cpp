#include<stdio.h>
int main(){
    int grade;
    scanf("%d",&grade);
    if (grade >= 60){
        printf("pass");
    } else {
        printf("fail");
    }

    return 0;
}