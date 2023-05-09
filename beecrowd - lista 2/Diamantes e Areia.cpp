#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, resp = 0;
    cin >> N;

    string diamonds;
    stack<char> pilha;

    for (int i = 0; i < N; i++){

        while(!pilha.empty()) pilha.pop();
        
        cin >> diamonds; 

        // ALTERNATIVA PARA PERCORRER A STRING
        for(auto atual : diamonds) {
            if(atual == '<') {
                pilha.push(atual);
            } else if(atual == '>') {
                if(!pilha.empty()) {
                    pilha.pop();
                    resp++;
                }
            }
        }

        // for(int j = 0; j < diamonds.length(); j++) {
        //     if(diamonds[j] == '<') {
        //         pilha.push(diamonds[j]);
        //     } else if(diamonds[j] == '>') {
        //         if(!pilha.empty()) {
        //             pilha.pop();
        //             resp++;
        //         }
        //     }
        // }
        
        cout << resp << endl;
        resp = 0;
    }   
    
    return 0;
}