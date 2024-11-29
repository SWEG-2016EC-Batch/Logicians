#include <iostream>
using namespace std;

int main() {
    float weight, height, BMI;
    int NumBMI;

    cout << "Enter the number of people you want to calculate BMI\n";
    cin >> NumBMI;

    for (int i = 1; i <= NumBMI; i++) {
        cout << "Enter the body weight in kilogram: ";
        cin >> weight;
        cout << "Enter the height of the body in meter: ";
        cin >> height;

        height *= height; // Squaring the height
        BMI = weight / height;

        cout << "Body mass index = " << BMI << endl;

        if (BMI <18.5) {
            cout << "Underweight" << endl;
        } else if (BMI >=18.5 && BMI<=24.9) {
            cout << "Normal and healthy weight" << endl;
        } else if(BMI>=25 && BMI<=29.9) {
            cout << "Overweight" << endl;
        }else{
            cout<<"Obese!";
        }
    }

    return 0;
}
