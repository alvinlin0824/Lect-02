#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    // a is max
    if (a > b && a > c)
    {
        printf("True\n");
    } 
    else printf("False\n");
    
    // a is min
    if (b > a && c > a)
    {
        printf("True\n");
    } 
    else printf("False\n");
    
    // a is max
    if (a > b && a > c)
    {
        printf("False\n");
    } 
    else printf("True\n");

    // a is min
    if (b > a && c > a)
    {
        printf("False\n");
    } 
    else printf("True\n");

    return 0;
}