// Please write a program that allows the user to input an integer n
// and print out a triangle with height n formed by *

// Input Format
// integer n

// Output Format
// For a triangle * with a height of n, there will be one more * for each additional layer.
// Note: there are no whitespace characters in the output

#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; i++)
    {   
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;        
    }


    return 0;
}