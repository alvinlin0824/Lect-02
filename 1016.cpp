// Input keyboard keys, let the user press y to execute the program and then output run. 
// After the execution is completed, you can enter it again. 
// Press y to repeat the execution. Press other keys to end the program.

#include<iostream>
using namespace std;

int main(){
   
  char enter;
  cin >> enter;
  while (enter == 'y')
  {
    cout << "run" << endl;
    cin >> enter;
  }
  
  return 0;
}