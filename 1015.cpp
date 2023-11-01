// After inputting a character using the keyboard keys, 
// the character you entered will be printed immediately until the program ends after q is entered (q will also be printed)

#include<iostream>
using namespace std;

int main(){
   
  char enter;
  while (true)
  {
    cin >> enter;
    if (enter != 'q') {
        cout << enter << endl;
    } else {
        cout << enter << endl;
        break;
    }
  }
  
  return 0;
}