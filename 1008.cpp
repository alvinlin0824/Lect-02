// n = 1234567
// ans = 1+2+3+4+5+6+7 = 28 

#include<iostream>
using namespace std;

int main(){
   
  int n = 0;
  int sum = 0;
  cin >> n;

  while (n > 0)
  {
    int remainder;
    remainder = n % 10;
    sum += remainder;
    n /= 10;
  }

  cout << sum << endl ;
  

  return 0;
}

