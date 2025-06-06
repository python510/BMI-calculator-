#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float weight, height_cm, height_m, bmi;

    // Ask for input
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Enter your weight (kg): ";
    cin >> weight;
    
    cout << "Enter your height (cm): ";
    cin >> height_cm;

    // Convert height to meters
    height_m = height_cm / 100;

    // Calculate BMI
    bmi = weight / (height_m * height_m);

    // Display results
    cout << "\nHello " << name << "!" << endl;
    cout << "Your BMI is: " << bmi << endl;

    // Health message
    if (bmi < 18.5)
        cout << "You are underweight. Consider eating more balanced meals." << endl;
    else if (bmi >= 18.5 && bmi < 25)
        cout << "You have a normal weight. Keep up the healthy lifestyle!" << endl;
    else if (bmi >= 25 && bmi < 30)
        cout << "You are overweight. Consider exercising more." << endl;
    else
        cout << "You are obese. It is advisable to consult a healthcare provider." << endl;

    return 0;
}
