// The existing sequence is as follows: 1,2,3,4,5,6,7,8,9,10
// Please index as:

// Sum of odd numbers
// Sum of even numbers
// Add up all its numbers

#include<iostream>
#include<string>
using namespace std;

int main(){
   
    string str;
    int sum_odd = 0;
    int sum_even = 0;
    cin >> str;
    
    // for (int i = 0; i <= str.length() - 1; i+=2)
    // {
    
    //    if ((int(str[i]) - 48) % 2 == 0) {
    //       sum_even += (int(str[i]) - 48);
    //    } 
    //    else {
    //       sum_odd += (int(str[i]) - 48);
    //    }
    
    // }
    
    cout << str.length() << endl;
    // cout << sum_odd << endl << sum_even << endl << sum_odd + sum_even << endl;
    return 0;
}



