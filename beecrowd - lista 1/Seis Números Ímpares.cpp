#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int x;
    
    cin >> x;

    for(int i = x; i < x+12; i++) {
        if (i % 2 == 1){
            cout << i << endl;
        }
    }

    return 0;
}