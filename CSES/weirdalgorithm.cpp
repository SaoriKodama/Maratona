// https://cses.fi/problemset/task/1068/

#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    cout << n << " ";
    while(n !=1){
        if (n%2 == 0) n /= 2;
        else n = 1 + (3 * n); 
        cout << n << " ";
    }
    return 0;
}