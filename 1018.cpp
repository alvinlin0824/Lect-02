// Write a program to judge whether a person's grades are passing (the passing score is 60 points)
// Allow users to input grades and judge whether their grades are passing or not, and can input after each grade is judged.
// 'y': continue
// Other: leave

#include<stdio.h>
int main(){

    char iscontinue;
    int score;
    do {
    scanf(" %d",&score);

        if (score >= 60){
        scanf(" %c",&iscontinue);
        printf("pass\n");
        } 
        else {
        scanf(" %c",&iscontinue);
        printf("fail\n");
        }
    } while (iscontinue == 'y');
    return 0;
}