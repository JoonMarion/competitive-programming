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
vi moedas;
int dp[MAXN];
bool vis[MAXN];

int troco(int N) {
    if(N == 0) return 0;

    if(vis[N]) return dp[N];

    int ans = INF;

    for(auto moeda : moedas)
        if(moeda <= N) {
            vis[N] = true;
            ans = min(ans, troco(N - moeda) + 1);
        }
            
    return dp[N] = ans;
}

int main(int argc, char **argv) {

    optimize;
    
    int qtd;

    cin >> qtd;

    moedas.resize(qtd);

    for(int i = 0; i < qtd; i++)
        cin >> moedas[i];

    cin >> N;

    cout << troco(N) << endl;
 
    return 0;
}

