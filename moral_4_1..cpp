#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    double leg1, leg2, hypotenuse; 
    
    cout << "Enter the first leg: ";
    cin >> leg1;
    
    cout << "Enter the second leg: ";
    cin >> leg2;
    
    hypotenuse = sqrt((leg1 * leg1) + (leg2 * leg2));
    
    cout << fixed << setprecision(2);
    cout << "The hypotenuse is: " << hypotenuse << endl;
    
    return 0;
}