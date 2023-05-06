#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, menor, posicao;
    cin >> n;
    int x[n];

    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    menor = x[0];
    posicao = 0;

    for(int i = 0; i < n; i++){
        if(menor > x[i]) {
            menor = x[i];
            posicao = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}