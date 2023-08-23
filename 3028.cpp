// Allow the user to input three integers in sequence, representing the lengths of the three sides of the triangle.
// Please judge:
// Determine whether a triangle can be formed, if yes, output "True"; if not, output "False" and end the program.
// Determine whether it is a right triangle, if it is a right triangle, output "Right Triangle", otherwise output "Non-Right Triangle"

#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if (a + b > c && a + c > b && b + c > a) {
        printf("True\n");
        if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)){
            printf("Right Triangle\n");
        } 
        else {
            printf("Non-Right Triangle\n");
        }
    } 
    else {
        printf("False\n");
    }
 
    return 0;
}