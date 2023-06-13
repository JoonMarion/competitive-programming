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
 
ll minCost(vector<ll>& heights, int K) {
    int n = heights.size();

    vector<ll> dp(n, INF);

    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= K && i - j >= 0; j++) {
            dp[i] = min(dp[i], dp[i - j] + abs(heights[i] - heights[i - j]));
        }
    }
    
    return dp[n - 1];
}

int main(int argc, char **argv)
{
    optimize;
    
    int N, K;

    cin >> N >> K;

    vector<ll> heights(N);

    for(int i = 0; i < N; i++)
        cin >> heights[i];

    ll ans = minCost(heights, K);

    cout << ans << endl;

    return 0;
}
