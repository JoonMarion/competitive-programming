// input types
// 6 -200
// -100
// 1000
// -2000
// 100
// -50
// 2000

// output types 
// -1300

#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, S, MS;

    cin >> N >> S;

    MS = S;

    int array[N];

    for(int i = 0; i < N; i++)
    {
        cin >> array[i];

        S += array[i];
        
        if(S < MS) 
            MS = S;

    }

    cout << MS << endl;
    
    return 0;
}