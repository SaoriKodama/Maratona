/* A. Escalator Conversations
*  https://codeforces.com/contest/1851/problem/A
*   
*  brute forceconstructive algorithmsmath
*/

#include <bits/stdc++.h>
using namespace std; 

void solve();

int main(){
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++){
        solve();
    }
}

void solve(){
    int n,m,k,H;
    int asw = 0;
    cin >> n >> m >> k >> H;
    for (int i = 0; i < n; i++){
        int x; 
        cin >> x;
        // somará 1 se o valor for verdadeiro
        asw += (x != H) && abs(x - H) % k == 0 && abs(x - H) <= (m-1) * k; 
    }
    cout << asw << endl;
}

