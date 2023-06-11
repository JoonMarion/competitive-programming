#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define optimize                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)
#define INF 100000010
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define REP(i, a, b) for (int i = (a); i <= (b); i++)
#define POS(n, x) (lower_bound(ALL(n), x) - (n).begin())
#define ll long long
#define ld long double
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pii>
#define os_type int
#define PB push_back
#define EB emplace_back
#define MOD 1000000007
#define PRIME 101
#define MAXN 1010
#define MAXM 1000000010
#define MAXL 23
#define endl '\n'

using namespace std;
using namespace __gnu_pbds;

#define ordered_set tree<os_type, null_type, less<os_type>, rb_tree_tag, tree_order_statistics_node_update>

/*
    400 3

    300 100
    200 90
    200 90

    knapsack
*/

int N;

vi nums;


// int dp[MAXN][MAXM];

/*
6
3 1 3 5 2 6

3 _ 3 5 2 6


i = 0, ultimo = 0

    i = 1, ultimo = 0


    i = 3, ultimo = 3  => + 1
        i = 4, ultimo = 3

        i = 4, ultimo = 5 => + 1

*/

map<pii, int> dp;

int solve(int i, int ultimo)
{
    if (i == N)
        return 0;

    // if (dp[i][ultimo] != -1)
    //     return dp[i][ultimo];

    if (dp.count({i, ultimo}))
        return dp[{i, ultimo}];

    if (nums[i] < ultimo)
        return dp[{i, ultimo}] = solve(i + 1, ultimo);

    return dp[{i, ultimo}] = max(solve(i + 1, ultimo), 1 + solve(i + 1, nums[i]));
}

int main(int argc, char **argv)
{
    optimize;

    // memset(dp, -1, sizeof dp);

    cin >> N;

    nums.resize(N);
    
    for (int &x : nums)
        cin >> x;

    cout << solve(0, 0) << endl;

    return 0;
}

/*
LCS

subsenquencia de uma string é uma sequencia de caracteres que aparecem em ordem relativa, mas não necessariamente contiguos


A = abcdef
B = cdofhij

cdf é uma subsequencia de A e B


LCS(A, B) = 3



*/