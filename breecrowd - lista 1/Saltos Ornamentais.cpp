#include <bits/stdc++.h>

using namespace std;

struct Competidor{
    string nome;
    double grau;
    vector<double> notas;
};

int main(){
    int n;
    cin >> n;

    vector<Competidor> competidores(n);    
    
    for(int i = 0; i < n; i++) {
        cin >> competidores[i].nome >> competidores[i].grau;

        for(int j = 0; j < 7; j++) {
            double nota;
            cin >> nota;
            competidores[i].notas.push_back(nota); 
        } 
    }

    double total;

    for(int i = 0; i < n; i++) {
        sort(competidores[i].notas.begin(), competidores[i].notas.end());
        competidores[i].notas.erase(competidores[i].notas.begin());
        competidores[i].notas.erase(competidores[i].notas.end() - 1);

        for(int j = 0; j < 5; j++) {
            total +=  competidores[i].notas[j] * competidores[i].grau;
        }

        cout << competidores[i].nome << " " << fixed << setprecision(2) << total << endl; 

        total = 0;
    }

    return 0;
}