#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        int a = i, b = i * i, c = i * i * i;

        cout << a << " " << b << " " << c << endl;
        cout << a << " " << b + 1 << " " <<  c + 1 << endl;
    }

    return 0;
}