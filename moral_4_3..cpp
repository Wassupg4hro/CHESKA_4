#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, angleC, c;
    
    // Get inputs 
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side C (in degrees): ";
    cin >> angleC;
    
    // Convert to radians and compute Law of Cosines 
    double rad = angleC * (3.14159265 / 180.0)
    ;c = sqrt((a * a) + (b * b) - (2 * a * b * cos(rad)));
    
    // Display result 
    cout << "Side c = " << c << endl;
    
    return 0;
}