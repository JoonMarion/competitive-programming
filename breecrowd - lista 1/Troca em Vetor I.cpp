#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n[20];
    int comeco = 0, fim = 19, aux;
    
    for(int i = 0; i < 20; i++) {
        cin >> n[i];
    }

    for(int i = 0; i < 10; i++) {
        aux = n[comeco];
        n[comeco] = n[fim];
        n[fim] = aux;

        comeco++;
        fim--;
    }

    for(int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << n[i] << endl;
    }

    return 0;
}