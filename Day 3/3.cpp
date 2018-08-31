#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int total = n % 2;
    
    if (total == 1){
        cout << "Weird" << endl;
    } else if (total == 0 && n >= 2 && n <= 5){
        cout<< "Not Weird" << endl;
    } else if (total == 0 && n >= 6 && n <= 20){
        cout << "Weird" << endl;
    } else if (total == 0 && n > 20){
        cout << "Not Weird" << endl;
    }
    
    return 0;
}
