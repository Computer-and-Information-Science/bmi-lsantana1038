#include <iostream>
using namespace std;

int main() {
    // declare my variables
    int height;
    height = 61; 

    int weight= 130;

    double weightKg = weightKg*0.453592;
    double heightMeters = heightMeters*0.0254;

    double bmi = weightKg / (heightMeters * heightMeters);
    
    cout << "The BMI for this person is : 24.56." << bmi << "." << endl;

}
