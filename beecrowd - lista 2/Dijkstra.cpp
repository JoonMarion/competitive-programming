#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_set<string> joias;
    string joia;

    while (getline(cin, joia)) {
        joias.insert(joia);
    }

    cout << joias.size() << endl;

    return 0;
}