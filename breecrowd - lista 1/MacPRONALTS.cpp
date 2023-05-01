#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, cod, qtd;
    float total;
    cin >> n;

    for (int i = 0; i < n; i ++) {
        cin >> cod >> qtd;
        if(cod == 1001) {
            total += (1.5 * qtd);
        } else if (cod == 1002) {
            total += (2.5 * qtd);
        } else if (cod == 1003) {
            total += (3.5 * qtd);
        } else if (cod == 1004) {
            total += (4.5 * qtd);
        } else if (cod == 1005) {
            total += (5.5 * qtd);
        }
    }

    cout << fixed << setprecision(2) << total << endl;

    return 0;
}