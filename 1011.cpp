#include<stdio.h>
int main(){
    int grade;
    int score;
    scanf("%d",&grade);
    scanf("%d",&score);
    if (grade == 1 && score >= 60){
        printf("pass");
    } else if (grade == 2 && score >= 70){
        printf("pass");
    } else {
        printf("fail");
    }

    return 0;
}