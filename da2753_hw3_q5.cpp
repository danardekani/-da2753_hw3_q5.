#include <iostream>
using namespace std;

int main()
{
    double weight, height, bmi;

    cout << "Please enter weight (in pounds): ";
    cin >> weight;
    cout << "Please enter height (in inches): ";
    cin >> height;

    bmi = (703 * weight)/(height * height);

    if (bmi <= 18.5)
    {
        cout << "Underweight" << endl;
    } else if (bmi <= 24.9)
    {
        cout << "Normal" << endl;
    } else if (bmi <= 30 )
    {
        cout << "Overweight" << endl;
    } else
        cout << "Obese" << endl;

    cout << bmi << endl;
    return 0;

}