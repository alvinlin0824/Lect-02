// Xiao Ming has lived in an equatorial country all year round (there are no four seasons), 
// and this year he came to Taiwan to study.
// Xiao Ming is very unfamiliar with the climate here, so he has to check what season it is now.
// So Xiao Ming will ask about the month, please help him determine what season it is at that time.
// known
// 3~5: Spring
// 6~8: Summer
// 9~11: Autumn
// 1, 2, 12: Winter
// If the month does not exist, output "Month doesn't exist!"

#include<iostream>
using namespace std;

int main(){
   
  int month;
  cin >> month;
  
  if (3 <= month && month <= 5){
    cout << "Spring" << endl;
  } else if (6 <= month && month <= 8) {
    cout << "Summer" << endl;
  } else if (9 <= month && month <= 11) {
    cout << "Autumn" << endl;
  } else if (month == 1 || month == 2 || month == 12) {
    cout << "Winter" << endl;
  } else {
    cout << "Month doesn't exist!" << endl;
  }
    
  return 0;
}