#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    cout << a << b << c << "\n";
    
    double D = b * b - 4 * a * c;
    
    double root1 = (-b + sqrt(D)) / (2 * a);
    double root2 = (-b - sqrt(D)) / (2 * a);

    if (D < 0)
    {
        cout << "Not real roots exist.\n ";
    }
    else if ( D == 0)
    {
        double root = (-b / ( 2 * a ));
        cout << "your root: " << root << endl;
    }
    else{
        cout << root1 << endl;
        cout << root2 << endl;
    }
    
}
