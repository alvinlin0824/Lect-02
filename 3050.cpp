// Please try to enter a number n and print out a height n
// triangle made of increasing numbers

#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    
    for (int i = 1; i <= sum; i++)
    {   
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
            i++;
        }      
            cout << endl;
    }


    return 0;
}