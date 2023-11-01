// There is an old landlord who wants you to help him design an elevator, 
// but he hopes that the elevator will not appear on the 4th floor. 
// After the old landlord enters the floor he wants to go to, 
// write a program to display the floors passed by the elevator from the 1st floor to the n floor.

#include<iostream>
using namespace std;

int main(){
    
    int floor;
    cin >> floor;

    for (int i = 1; i <= floor; i++)
    {
        if (i != 4) {
            cout << "floor " << i << endl;
        }
    }
    
    return 0;
}