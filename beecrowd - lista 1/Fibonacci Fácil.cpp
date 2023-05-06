#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, ultimo = 1, penultimo = 0, atual;
    cin >> n;

    for(int i = 0; i < n; i++) {
        if(i < 2) {
            cout << i << " ";
        } else {
            atual = ultimo + penultimo;
            penultimo = ultimo;
            ultimo = atual;
            cout << atual;
            if (i == n-1) {
                cout << endl;
                break;
            } else {
                cout << " ";
            }
        }
    }

    return 0;
}