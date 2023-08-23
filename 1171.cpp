// Please write a program that allows the user to input a number N, and then input N numbers continuously
// Find out, the maximum, minimum and position of these numbers.
// Input format
// Input the integer N in the first line, 0≤N≤1000000
// The next 1~N lines, the input is an integer, 0≤1~N≤1000000

// Output format
// Output a total of four lines, with multiple numbers in each line, and each number is separated by a blank.
// The maximum value (integer), the position of the first maximum value (integer), 
// the position of the last maximum value (integer, if there are more than one, it will be output, if not, it will not be used)
// The second largest value (integer), the position of the first second value (integer), 
// the position of the last second largest value (integer, if there are more than one, it will be output, if not, it will not be used)
// The minimum value (integer), the position of the first minimum value (integer), 
// the position of the last minimum value (integer, if there are more than one, it will be output, if not, it will not be used)
// The second minimum value (integer), the position of the first second minimum value (integer), 
// the position of the last second minimum value (integer, if there are more than one, it will be output, if not, it will not be used)

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int N;
    cin >> N;
    int *arr;
    arr = new int[N];
    
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // Maximum and minimum
    int max = arr[0]; int max_index = 0;
    int min = arr[0]; int min_index = 0; 
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

    int max2th = INT_MIN; int max2th_index;
    int min2th = INT_MAX; int min2th_index;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > max2th && arr[i] != max)
        {
            max2th = arr[i];
            max2th_index = i;
        } 

        if (arr[i] < min2th && arr[i] != min)
        {
            min2th = arr[i];
            min2th_index = i;
        } 
    }
    
    // find last max index
    int last_max_index; int last_min_index; int second_max_index; int second_min_index;
    for (int i = N-1; i >= 0; i--) {
        if (arr[i] == max) {
            last_max_index = i;
            break;
        }
    }

    for (int i = N-1; i >= 0; i--) {
        if (arr[i] == max2th) {
            second_max_index = i;
            break;
        }
    }

    for (int i = N-1; i >= 0; i--) {
        if (arr[i] == min) {
            last_min_index = i;
            break;
        }
    }

    for (int i = N-1; i >= 0; i--) {
        if (arr[i] == min2th) {
            second_min_index = i;
            break;
        }
    }
        
        
    if (max_index != last_max_index){
        cout << max << " " << max_index + 1 << " " << last_max_index + 1 << endl;
    } 
    else cout << max << " " << max_index + 1 << endl;
    
    if (max2th_index != second_max_index){
        cout << max2th << " " << max2th_index + 1 << " " << second_max_index + 1 << endl;
    } else cout << max2th << " " << max2th_index + 1 << endl;
    
    if (min_index != last_min_index) {
        cout << min << " " << min_index + 1 << " " << last_min_index + 1 << endl;
    } else cout << min << " " << min_index + 1 << endl;
  
    if (min2th_index != second_min_index){
        cout << min2th << " " << min2th_index + 1 << " " << second_min_index + 1 << endl;
    } else cout << min2th << " " << min2th_index + 1 << endl;
    
    delete []arr;
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
//     int second_max = INT_MIN, second_min = INT_MAX;
//     int second_max_pos = -1, second_min_pos = -1;
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max) {
//             second_max = max;
//             second_max_pos = max_pos;
//             max = arr[i];
//             max_pos = i;
//         } else if (arr[i] > second_max) {
//             second_max = arr[i];
//             second_max_pos = i;
//         }
//         if (arr[i] < min) {
//             second_min = min;
//             second_min_pos = min_pos;
//             min = arr[i];
//             min_pos = i;
//         } else if (arr[i] < second_min) {
//             second_min = arr[i];
//             second_min_pos = i;
//         }
//     }
//     cout << max << " " << max_pos + 1 << " ";
//     if (second_max != INT_MIN) {
//         cout << second_max_pos + 1 << endl;
//     } else {
//         cout << endl;
//     }
//     cout << second_max << " ";
//     if (second_max != INT_MIN) {
//         cout << second_max_pos + 1 << " ";
//         if (max == second_max) {
//             cout << max_pos + 1 << endl;
//         } else {
//             cout << endl;
//         }
//     } else {
//         cout << endl << endl;
//     }
//     cout << min << " " << min_pos + 1 << " ";
//     if (second_min != INT_MAX) {
//         cout << second_min_pos + 1 << endl;
//     } else {
//         cout << endl;
//     }
//     cout << second_min << " ";
//     if (second_min != INT_MAX) {
//         cout << second_min_pos + 1 << " ";
//         if (min == second_min) {
//             cout << min_pos + 1 << endl;
//         } else {
//             cout << endl;
//         }
//     } else {
//         cout << endl << endl;
//     }
//     return 0;
// }