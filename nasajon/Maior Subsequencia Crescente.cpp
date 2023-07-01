// CODERBYTE 
/*
    mostrar maior subsequencia crescente

    INPUT: 9, 9, 4, 2
    OUTPUT: 1
    
    INPUT: 10, 22, 9, 33, 21, 50, 41, 60, 80
    OUTPUT: 6
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 100000010
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define POS(n, x) (lower_bound(ALL(n), x) - (n).begin())
#define ll long long
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define PB push_back
#define EB emplace_back
#define endl '\n'
#define MAXN 101010

using namespace std;
using namespace __gnu_pbds;

#define ordered_set tree<os_type, null_type, less<os_type>, rb_tree_tag, tree_order_statistics_node_update>

int LongestIncreasingSequence(int arr[], int arrLength) {
    vi dp(arrLength, 1);

    for (int i = 1; i < arrLength; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main(void) {
    optimize;
   
    int A[] = coderbyteInternalStdinFunction(stdin);
    int arrLength = sizeof(A) / sizeof(*A);
  
    cout << LongestIncreasingSequence(A, arrLength);

    return 0;
}
