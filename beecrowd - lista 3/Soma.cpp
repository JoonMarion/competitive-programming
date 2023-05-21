// input types
// 10 4
// 2 0 1 1 0 0 8 4 1 3
// output types
//  5

#include <bits/stdc++.h>

using namespace std;


#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    // Leitura dos números da sequência e armazenamento em um vetor
    vector<int> array(N);
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    // Inicialização do mapa de contagem dos prefixos de soma
    unordered_map<int, int> prefixSumCount;

    // Variáveis para acompanhar o prefixo de soma atual e a contagem de retângulos
    int prefixSum = 0;
    int rectangleCount = 0;

    // Inicializa o mapa com o prefixo de soma zero encontrado uma vez
    prefixSumCount[0] = 1;

    // Percorre os números da sequência e calcula os prefixos de soma
    for (int i = 0; i < N; i++) {
        // Atualiza o prefixo de soma acumulando o número atual
        prefixSum += array[i];

        // Verifica se existe um retângulo com a soma desejada até o momento
        if (prefixSumCount.find(prefixSum - K) != prefixSumCount.end()) {
            // Incrementa a contagem de retângulos pelo número de ocorrências do prefixo de soma correspondente
            rectangleCount += prefixSumCount[prefixSum - K];
        }

        // Atualiza a contagem do prefixo de soma atual
        prefixSumCount[prefixSum]++;
    }

    // Imprime o número total de retângulos encontrados
    cout << rectangleCount << endl;

    return 0;
}
