#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;

    while( cin >> N ) {

        bool ehFila = true, ehPilha = true, ehPQ = true;

        queue<int> fila;
        stack<int> pilha;
        priority_queue<int> pq;
        int comando, x;

        for(int i = 0; i < N; i++){

            cin >> comando >> x;

            if(comando == 1){
                fila.push(x);
                pilha.push(x);
                pq.push(x);
            } else {
                if(pilha.top() != x){
                    ehPilha = false;
                } else {
                    pilha.pop();
                }
                if(fila.front() != x){
                    ehFila = false;
                } else{
                    fila.pop();
                }
                if(pq.top() != x){
                    ehPQ = false;
                } else {
                    pq.pop();
                }
            }
        }

        if (!ehPilha && !ehFila && !ehPQ){
            cout << "impossible" << endl;
        } else if (ehPilha && ehPQ){
            cout << "not sure" << endl;
        } else if (ehPilha && ehFila){
            cout << "not sure" << endl;
        } else if (ehPQ && ehFila){
            cout << "not sure" << endl;
        } else if (ehPQ){
            cout << "priority queue" << endl;
        } else if (ehFila){
            cout << "queue" << endl;
        } else if (ehPilha){
            cout << "stack" << endl;
        }
    }
    return 0;
}