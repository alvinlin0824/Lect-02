#include<stdio.h>
int main(){
    int grade;
    int score;
    scanf("%d",&grade);
    if (grade != 1 && grade != 2)
    {
        printf("role error");
    } 
    else if (grade == 1 || grade == 2)
    {
        scanf("%d",&score);
        if (score < 0 || score > 100)
        {
             printf("score error");
        }
        else if (grade == 1 && score >= 60 && score <= 100)
        {
            printf("pass");
        }
        else if (grade == 2 && score >= 70 && score <= 100) {
            printf("pass");
        }
        else {
            printf("fail");
        }
    }
    return 0;
}