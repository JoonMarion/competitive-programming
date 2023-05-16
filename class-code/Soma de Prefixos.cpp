#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    /*
        array N elementos
        => [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
 
        prefix_sum = [0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55]
 
 
        (SOMA(1, i)) => SOMA(L, R)
    
        Q operações
 
        [L, R] => retornar a soma de todos os elementos entre L e R
    
 
        5
        [1, 5] => 15
        [2, 8] => 35
        [6, 6] => 6
        [1, 10] => 55
        [3, 5] => 12
    */
 
   int N;
 
    cin >> N;
 
    int array[N + 1];
 
    for(int i = 1; i <= N; i++)
    {
        cin >> array[i];
    }
 
 
 
    int Q;
 
    cin >> Q;
 
    vector<int> prefix_sum(N + 1);
 
    prefix_sum[0] = 0;
 
    for (int i = 1; i <= N; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + array[i];
    }
 
    /*
        O(N + Q)
    */
 
    while(Q--)
    {
        int L, R;
 
        cin >> L >> R;
 
        int soma = prefix_sum[R] - prefix_sum[L - 1];
 
        cout << soma << endl;
    }
 
    return 0;
}