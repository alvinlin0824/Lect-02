// Please write a program that allows the user to input an integer n greater than 0
// Calculate the result of adding 1 to n
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d",sum);
    return 0;
}