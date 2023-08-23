// Please write a program that allows users to input height and weight to calculate BMI, 
// and judge the degree of BMI value according to their BMI.
// BMI value calculation formula: BMI=weight (kg)/height2 (meter2)

// For example: a person with 52 kg and a height of 155 cm, the BMI is:
// 52(kg)/1.552(m2)=21.64

#include<iostream>
#include <iomanip> 
#include<cmath>
using namespace std;

int main(){
    double height, weight, bmi;

    cin >> height >> weight;

    bmi = weight / pow(height/100,2);
    
    cout << fixed << setprecision(2) << bmi << endl;
    
    if (bmi < 18.5)
    {
        cout << "Underweight";
    } else if (18.5 <= bmi && bmi < 24)
    {
        cout << "Normal";
    } else if (24 <= bmi && bmi < 27)
    {
        cout << "Overweight";
    } else if (27 <= bmi && bmi < 30)
    {
        cout << "Obese Class I";
    } else if (30 <= bmi && bmi < 35)
    {
        cout << "Obese Class II";
    } else 
    {
        cout << "Obese Class III";
    }
    
    return 0;
}