// Enter a number m
// Print the prime numbers between 2 and m
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int is_prime = 1;
        for (int j = 2; j <= i/2; j++)
        {
        // Not a prime number
            if (i % j == 0) {
                is_prime = 0;
                break;
            } 
        }
        
        if (is_prime == 1 & i != 1) {
        printf("%d is prime\n",i);
        }
        
    }

    return 0;
}