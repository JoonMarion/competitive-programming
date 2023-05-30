#include <bits/stdc++.h>
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

 
#define ordered_set tree<os_type, null_type,less<os_type>, rb_tree_tag,tree_order_statistics_node_update>
 
int N;

ll dp[MAXN];
bool vis[MAXN];

ll fib(int N) {

    if(N == 0) return 0;
    if(N == 1) return 1;

    if(vis[N]) return dp[N];

    vis[N] = true;

    return dp[N] = fib(N - 1) + fib(N - 2);
}

int main(int argc, char **argv)
{
    optimize;
 
    cin >> N;

    for(int i = 0; i < N; i++)
        cout << "Fib(" << i << "): " << fib(i) << endl;

    return 0;
}
