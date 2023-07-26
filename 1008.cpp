#include<stdio.h>
int main(){
    int a;
    scanf(" %d",&a);
    
    int sum = 0;
    while (a > 10) {
      int remainder = a % 10;
      a = a / 10;
      if (a > 10) {
        sum = sum + remainder;
      } 
      else {
        sum = sum + remainder + a;
      }
    //   printf("Remainder: %d\n",remainder);
    //   printf("Quotient: %d\n",a);
    }
    printf("%d\n",sum);
    return 0;
}