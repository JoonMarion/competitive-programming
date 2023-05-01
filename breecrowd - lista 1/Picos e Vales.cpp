#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, aux;

    cin >> n;

    int altura[n];
    bool padrao = true;
    string comparado = "maior";

    for(int i = 0; i < n; i++) {
        cin >> altura[i];
    }   

    if(altura[1] > altura[0]) {
        comparado = "maior";
    } else if (altura[1] < altura[0]) {
        comparado = "menor";
    } else {
        padrao = false;
    }

    for(int i = 2; i < n; i++) {
        if(comparado == "maior" && altura[i] > altura[i - 1]){
            padrao = false;
            break;
        } else if(comparado == "maior" && altura[i] < altura[i - 1]) {
            comparado = "menor";
            continue;
        } else if(comparado == "menor" && altura[i] < altura[i - 1]) {
            padrao = false;
            break;
        } else if(comparado == "menor" && altura[i] > altura[i - 1]) {
            comparado = "maior";
            continue;
        } else if(comparado == "menor" || comparado == "maior" && altura[i] == altura[i - 1]) {
            padrao = false;
            break;
        }
    }   

    cout << padrao << endl;

    return 0;
}