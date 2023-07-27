// Please write a program that allows the user to input an integer n
// Calculate the result of n factorial
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int product = 1;
    for (i = 1; i <= n; i++)
    {
        product = product*i;
    }
    printf("%d",product);
    return 0;
}