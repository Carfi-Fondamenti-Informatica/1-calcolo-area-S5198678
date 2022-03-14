#include <iostream>
using namespace std;
int main() {
    float a,b,c;
    float triangle,square,rectangle,trapezoid;

    cin >> a >> b >> c ;

    triangle = 0,5 * a * b;
    square = a*a;
    rectangle = a*b;
    trapezoid = 0,5 * (a+b) * c;
    
    cout << triangle << endl;
    cout << square << endl;
    cout << rectangle << endl;
    cout << trapezoid << endl;
    
    return 0;
