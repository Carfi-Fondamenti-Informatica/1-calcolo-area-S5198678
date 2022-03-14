#include <iostream>
using namespace std;
int main() {
    float a,b,c;
    float Triangolo,Quadrato,Rettangolo, Trapezio;

    cin >> a >> b >> c ;

    Triangolo = (float) 0.5 * (a * b);
    Quadrato = a*a;
    Rettangolo = a*b;
    Trapezio = (float) 0.5 * (a+b) * c;

    cout << Triangolo << endl;
    cout <<  Quadrato << endl;
    cout << Rettangolo << endl;
    cout << Trapezio << endl;

    return 0;
}
