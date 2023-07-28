// Please write a program that allows the user to input an integer 
// n greater than 0 to calculate the result of adding 1 to n
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
        if (i < n)
        printf("%d+",i);
        else 
        printf("%d = ",i);
    }
    printf("%d",sum);
    return 0;
}