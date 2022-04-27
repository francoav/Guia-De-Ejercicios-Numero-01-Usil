#include <iostream>

using namespace std;


int main() {


    float res, a, b, c, d,e,f;

    cout << "Digite la variable a:"; cin >> a;
    cout << "Digite la variable b:"; cin >> b;
    cout << "Digite la variable c:"; cin >> c;
    cout << "Digite la variable d:"; cin >> d;
    cout << "Digite la variable e:"; cin >> e;
    cout << "Digite la variable f:"; cin >> f;

    res = (a + (b / c)) / (d + (e / f));

    cout << "\n El resultado es:" << res << endl;




    return 0;

}