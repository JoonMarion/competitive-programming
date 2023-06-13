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
 
ll maxSumWeight(vi &weights, vi &values, int W) {
    int N = weights.size();
    
    vector<vector<ll>> dp(N + 1, vector<ll>(W + 1, 0));

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= W; j++) {
            if(weights[i - 1] <= j) {
                dp[i][j] = max(dp[i - 1][j], values[i - 1] + dp[i - 1][j - weights[i - 1]]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[N][W];
}

int main(int argc, char **argv)
{
    optimize;
    
    int N, W;

    cin >> N >> W;

    vi weights(N); 
    vi values(N);

    for(int i = 0; i < N; i++)
        cin >> weights[i] >> values[i];
    
    ll ans = maxSumWeight(weights, values, W);

    cout << ans << endl;

    return 0;
}
