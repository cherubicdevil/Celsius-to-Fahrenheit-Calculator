/* This program accepts the temperature in degrees Celsius
and computes the temperature in Fahrenheit. */

//author: Kristy Gao

#include <iostream>
using namespace std;

int main() {
  double tempCelsius;
  cout << "enter degrees Celsius: " << endl;
  cin >> tempCelsius;
  double tempFahrenheit = ((9/5)*tempCelsius) + 32;
  cout << tempCelsius << " degrees Celsius is " << tempFahrenheit << " degrees Fahrenheit." << endl;
}
