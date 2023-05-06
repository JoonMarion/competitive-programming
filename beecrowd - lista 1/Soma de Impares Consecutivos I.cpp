#include <bits/stdc++.h>

using namespace std;

int min(int x, int y) {
    if (x < y) {
        return x;
    }
    else 
    {
        return y;
    }
}

int max(int x, int y) {
    if (x > y) {
        return x;
    }
    else 
    {
        return y;
    }
}

int main(){
    int x, y;
    int total = 0;
    cin >> x >> y;

    int comeco = min(x, y);
    int fim = max(x, y);

    for(int i = comeco + 1; i < fim; i++) {
        if(i % 2 != 0) {
            total += i;
        }
    }

    cout << total << endl;

    return 0;
}