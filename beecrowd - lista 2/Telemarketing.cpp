#include <bits/stdc++.h>

using namespace std;

struct Vendedor
{
    int id, tempo;

    Vendedor(int id, int tempo) : id(id), tempo(tempo) {}

    bool operator<(const Vendedor &v) const
    {
        if (tempo == v.tempo)
            return id > v.id;
        return tempo > v.tempo;
    }
};

int main()
{
    int N, M;

    cin >> N >> M;

    priority_queue<Vendedor> fila;

    for (int i = 1; i <= N; i++)
        fila.push(Vendedor(i, 0));

    vector<int> ans(N + 1, 0);

    //O(N + M log N)

    for (int i = 0; i < M; i++)
    {
        int duracao;

        cin >> duracao;

        auto menor = fila.top();
        fila.pop();

        ans[menor.id]++;

        fila.push(Vendedor(menor.id, menor.tempo + duracao));
    }

    for (int i = 1; i <= N; i++)
        cout << i << " " << ans[i] << endl;


    return 0;
}