// n = 1234567
// ans = 1+2+3+4+5+6+7 = 28 

#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    
    int sum = 0;

    if (a >= 10) {
    while (a >= 10) {
      int remainder = a % 10;
      a = a / 10;
      if (a >= 10) {
        sum = sum + remainder;
        } 
      else {
        sum = sum + remainder + a;
        }
      }
    } 
    else sum = a;
    printf("%d\n",sum);
    return 0;
}

    //   printf("Remainder: %d\n",remainder);
    //   printf("Quotient: %d\n",a);