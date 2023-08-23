// Please write a program that allows the user to input a number N, and then input N numbers continuously
// Find out, the maximum, minimum and position of these numbers.

#include<iostream>
using namespace std;

int main(){
    int N;
    int *arr;

    cin >> N;
    arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // Maximum
    int max = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }  
    }
   
    // find max index
    int max_index;
    for (int i = 0; i < N; i++) {
        if (arr[i] == max) {
            max_index = i;
            break;
        }
    }

    // minimum
    int min = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }  
    }
   
    // find min index
    int min_index;
    for (int i = 0; i < N; i++) {
        if (arr[i] == min) {
            min_index = i;
            break;
        }
    }

    
    cout << max << " " << max_index + 1 << endl;
    cout << min << " " << min_index + 1 << endl;

    return 0;
}