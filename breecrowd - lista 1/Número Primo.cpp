#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    int n, aux;
    cin >> n;
    int v[n];

    for(int i = 0; i < n; i++) {
        cin >> v[i];  
    }

    for(int i = 0; i < n; i++) {
        bool primo = true;
        aux = v[i];
        
        for (int j = 2; j < aux; j++) {
            if(aux % j == 0) {
                primo = false; 
            }
        }

        if(primo == true) {
            cout << v[i] << " eh primo" << endl;
        } else {
            cout << v[i] << " nao eh primo" << endl;
        }
        
    }

    return 0;
}