//backtracking - refinamento do algoritmo de busca por força bruta

#include <bits/stdc++.h>
using namespace std;

vector<int> subset; // Armazenará os elementos do subconjunto
int n; // O tamanho do conjunto

void getnum (int k){
    if (k == n + 1){
        // Processar o subconjunto 
        cout << "{";
        for (int i = 0 ; i < subset.size(); ++i){
            if (i > 0) cout << ", ";
            cout << subset[i];
        }
        cout << "}\n";
    }
    else {
        //include k in the subset
        subset.push_back(k); // push_back add um elemento no final do vetor
        cout << 1 << endl;
        getnum(k + 1);
        cout << 2 << endl;
        subset.pop_back(); // pop_back tira o último elemento de um vetor 
        // não incluir k no subconjunto
        cout << 3 << endl;
        cout << k << "." << endl;
        getnum(k + 1);  
        cout << 4 << endl;
    }
}


int main(){
    cout << "Digite o tamanho do conjunto: ";
    cin >> n;

    getnum(1); // Começa a busca a partir do primeiro número (1)
    return 0;
}
