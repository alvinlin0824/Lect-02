// The existing sequence is as follows: 1,2,3,4,5,6,7,8,9,10
// Please index as:

//      sum of odd numbers
//      sum of even numbers
//      sum all its numbers

// Input Format

// string (a string of numbers)
// Output Format

// Integer (sum of odd numbers)
// Integer (the sum of even digits)
// Integer (sum of all numbers)

#include<iostream>
#include <iomanip> 
#include <string>
using namespace std;

int main(){
    
    string str;

    cin >> str;
    
    
    for (int i = 0; i <= str.length(); i+=2)
    {
        cout << str[i] << endl;
    }

    cout << str.length();
    cout << str[18];

    return 0;
}

