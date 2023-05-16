// INPUT TYPES
// SEARCH SOLUTIONS WITH ENTRIES BY THE COMMAND
// 
// 10 100
// 17 13 20 10 12 16 10 13 13 10

#include <bits/stdc++.h>

using namespace std;

bool busca(int F, const vector<int>& capsulas, int dias) { = 12
    long long totalCoins = 0;
    for (int capsula : capsulas) {
        totalCoins += dias / capsula;
    }
    return totalCoins >= F;
}

int main() {
    int N, F;
    cin >> N >> F;

    vector<int> capsulas(N);
    for (int i = 0; i < N; i++) {
        cin >> capsulas[i];
    }

                            // busca binária 
    long long low = 1;      // menor número de dias possível
    long long high = 1e8;   // maior número de dias possível

    while (low < high) {
        long long mid = (low + high) / 2;

        if (busca(F, capsulas, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    cout << low << endl;

    return 0;
}