#include <bits/stdc++.h>
using namespace std;

int main(){
    //desabilita a sincronização entre entrada e saída - gera melhoria de desempenho
    //mas não deixa juntar scanf e printf com cin cout 
    ios::sync_with_stdio(0);
    //desconecta o fluxo de entrada padrâo cn do fluxo de saída padrão cout - gera melhoria de desempenho
    //não deixa misturar cin e cout numa mesma saída
    cin.tie(0);
    int a,b; 
    string x;
    cin >> a >> b >> x;
    cout << a << " " << b << " " << x << "\n";

}