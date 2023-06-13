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
 
string ant;

int maxSumPoints(vi a, vi b, vi c) {
    int n = a.size();

    vector<vi> dp(n + 1, vi(3, 0)); 

    for (int i = 1; i <= n; i++) {
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a[i - 1];
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + b[i - 1];
        dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + c[i - 1];
    }

    return max({ dp[n][0], dp[n][1], dp[n][2] });
}

int main(int argc, char **argv)
{
    optimize;
    
    int N;

    cin >> N;
    
    vi a(N);
    vi b(N);
    vi c(N);

    for(int i = 0; i < N; i++)
        cin >> a[i] >> b[i] >> c[i];

    int ans = maxSumPoints(a, b, c);
    
    cout << ans << endl;

    return 0;
}
