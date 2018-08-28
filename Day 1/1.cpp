#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    string c, j;
    cin >> a;
    cin >> b;
    getline(cin, c);
    getline(cin, j);
    cout<< i + a << endl;
    cout.precision(1);
    cout<< fixed << d + b << endl;
    cout<< s + c + j<< endl;
      return 0;
}
