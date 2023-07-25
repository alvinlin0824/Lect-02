#include<stdio.h>
int main(){

    char iscontinue;
    int score;
    do {
    scanf("%d",&score);

        if (score >= 60){
        printf("pass");
        scanf(" %c",&iscontinue);
        } 
        else {
        printf("fail");
        scanf(" %c",&iscontinue);
        }
    } while (iscontinue == 'y');
    return 0;
}