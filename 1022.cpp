// Please try to input a number n and print an inverted triangle

// Input Format
// number n

// Output Format
// An inverted triangle with a height of n

#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; i++)
    {   
        for (int j = 1; j <= N; j++)
        {
            if (j <= N - i) {
                cout << " ";
            } else {
                cout << "*";        
            }           
        }
        cout << endl;        
    }

    return 0;
}