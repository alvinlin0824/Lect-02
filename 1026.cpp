// A Ming felt that his computer was often posted randomly by friends when it was left at school, 
// so he wanted to write a password verification program to protect his privacy.
// He didn't want to make his password too complex in case he forgot and couldn't log in, 
// so the password only contained numbers.
// He also doesn’t want to be like a cash machine, which locks the card 
// after entering the wrong password more than three times, 
// so he hopes that the program can try the password an unlimited number of times until the correct password is entered.
// Can you help him design this program so that his friends can no longer steal his computer and post?

#include<iostream>
using namespace std;

int main(){
    //  long long int data type in C++ is used to store 64-bit integers. 
    //  It is one of the largest data types to store integer values, 
    //  unlike unsigned long long int both positive and negative
    long long correct_password;

    cin >> correct_password;

    while (true)
    {
        long long attempt;
        cin >> attempt;
        if (correct_password != attempt){
            cout << "Wrong Password!" << endl;
        }
        else{
            cout << "Correct!" << endl;
            break;
        }
    }
    
    return 0;
}