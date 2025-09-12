#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    double pi = 3.1415926535;
    cout << fixed << setprecision(3);
    cout << pi << endl;
    char t = '6';
    cout << "Привет мир" << endl;
    string s;
    getline(cin,s);
    cout << s << endl;
    cout << 9 << endl;
    return 0;
}
