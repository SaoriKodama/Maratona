#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b;
    cin >> a >> b;
    cout << a - b;
    if (abs(a-b) < 1e-9) {
        cout << "a e b são iguais";
    }
}
