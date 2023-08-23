// Flash, the fastest man in the world.
// There is a rumor that some people say that Flash's movement is discontinuous and has the ability to jump through space.
// In order to prove that Flash's action trajectory is continuous, experts invited Flash to do experiments.
// Given an integer N where 0<N<100000, they ask Flash to run to N's position and turn back.
// During the process, there are cameras recording the position of Flash, please output the movement track of Flash.
// To prove that Flash does not have the ability to jump in space.
// example:
// N=5
// Output: "123454321\n" (without spaces)

#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; i++)
    {   
        cout << i; 
    }

    for (int i = N-1; i >= 1; i--)
    {   
        cout << i; 
    }
   

    cout << endl;
    
    return 0;
}