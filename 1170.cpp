// Please write a program that allows the user to input a number N, and then input N numbers continuously
// Find out, the maximum, minimum and position of these numbers.

#include<iostream>
using namespace std;

int main(){
    int N;
    // Dynamic memory allocation
    int *arr;

    cin >> N;
    // Dynamic memory allocation
    arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // Maximum and minimum
    int max = arr[0]; int max_index = 0; int min = arr[0]; int min_index = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        } 

        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        } 
    }
   
    // find last max index
    int last_max_index;
    for (int i = N-1; i >= 0; i--) {
        if (arr[i] == max) {
            last_max_index = i;
            break;
        }
    }

    // find last min index
    int last_min_index;
    for (int i = N-1; i >= 0 ; i--) {
        if (arr[i] == min) {
            last_min_index = i;
            break;
        }
    }

    delete []arr;
    
    if (max_index != last_max_index){
        cout << max << " " << max_index + 1 << " " << last_max_index +1 << endl;
    } 
    else cout << max << " " << max_index + 1 << endl;
    
    if (min_index != last_min_index) {
        cout << min << " " << min_index + 1 << " " << last_min_index +1 << endl;
    } else cout << min << " " << min_index + 1 << endl;
  
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int max = arr[0], min = arr[0], max_pos = 0, min_pos = 0;
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//             max_pos = i;
//         }
//         if (arr[i] < min) {
//             min = arr[i];
//             min_pos = i;
//         }
//     }
    
//     cout << max << " " << max_pos + 1 << " ";
//     for (int i = n - 1; i >= 0; i--) {
//         if (arr[i] == max) {
//             cout << i + 1 << endl;
//             break;
//         }
//     }
//     cout << min << " " << min_pos + 1 << " ";
//     for (int i = n - 1; i >= 0; i--) {
//         if (arr[i] == min) {
//             cout << i + 1 << endl;
//             break;
//         }
//     }
//     return 0;
// }