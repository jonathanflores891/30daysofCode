#include <bits/stdc++.h>

using namespace std;

void operation(int n){
    
    for(int i = 1; i < 11; i++){
        int num = n * i;
        cout << n << " x " << i << " = " << num << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    operation(n);
    return 0;
}
