// Ask the user to enter a number between 1 and 100
// Convert grade point (GPA) and grade results according to the grade system of National Taiwan University
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (90<=n && n<= 100) {
        printf("%.1f\n",4.3);
        printf("A+");
    }
    else if (85<=n && n<= 89) {
        printf("%.1f\n",4.0);
        printf("A");
    }
    else if (80<=n && n<= 84) {
        printf("%.1f\n",3.7);
        printf("A-");
    }
    else if (77<=n && n<= 79) {
        printf("%.1f\n",3.3);
        printf("B+");
    }
    else if (73<=n && n<= 76) {
        printf("%.1f\n",3.0);
        printf("B");
    }
    else if (70<=n && n<= 72) {
        printf("%.1f\n",2.7);
        printf("B-");
    }
    else if (67<=n && n<= 69) {
        printf("%.1f\n",2.3);
        printf("C+");
    }
    else if (63<=n && n<= 66) {
        printf("%.1f\n",2.0);
        printf("C");
    }
    else if (60<=n && n<= 62) {
        printf("%.1f\n",1.7);
        printf("C-");
    }
    else 
    {
        printf("%d\n",0);
        printf("F");
    }
    return 0;
}