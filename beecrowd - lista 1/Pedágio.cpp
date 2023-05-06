#include <bits/stdc++.h>

using namespace std;

int main(){
    int comprimento, distancia, custo, pedagio, total;

    cin >> comprimento >> distancia >> custo >> pedagio;

    total += comprimento * custo;

    total += (comprimento / distancia) * pedagio;

    cout << total << endl;

    return 0;
}