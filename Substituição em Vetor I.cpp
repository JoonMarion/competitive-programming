#include <bits/stdc++.h>

using namespace std;

int main(){

    int v[10];

    for(int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < 10; i++) {
        int aux = v[i];
        if(aux <= 0) {
            aux = 1;
        }
        cout << "X[" << i << "] = " << aux << endl;        
    }

    return 0;
}