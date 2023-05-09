#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n && n) {
        queue<int> fila;
        for (int i = 1; i <= n; i++) {
            fila.push(i);
        }
        vector<int> descartadas;
        while (fila.size() > 1) {
            descartadas.push_back(fila.front());
            fila.pop();
            fila.push(fila.front());
            fila.pop();
        }
        cout << "Discarded cards:";
        for (int i = 0; i < (int)descartadas.size(); i++) {
            cout << " " << descartadas[i];
            if (i + 1 != (int)descartadas.size()) {
                cout << ",";
            }
        }
        if (!descartadas.empty()) {
            cout << "\nRemaining card: " << fila.front() << "\n";
        } else {
            cout << "\nRemaining card: 1\n";
        }
    }
    return 0;
}