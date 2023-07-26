#include<stdio.h>
int main(){

    char iscontinue;
    int score;
    do {
    scanf(" %d",&score);

        if (score >= 60){
        scanf(" %c",&iscontinue);
        printf("pass");
        } 
        else {
        scanf(" %c",&iscontinue);
        printf("fail");
        }
    } while (iscontinue == 'y');
    return 0;
}