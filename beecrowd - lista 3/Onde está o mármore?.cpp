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
using namespace std;
using namespace __gnu_pbds;
 
#define ordered_set tree<os_type, null_type,less<os_type>, rb_tree_tag,tree_order_statistics_node_update>
 

string find_marble(vector<int>& marmores, int query) {
    for (int i = 0; i < marmores.size(); i++) {
        if (marmores[i] == query) {
            return to_string(query) + " found at " + to_string(i + 1);
        }
    }
    return to_string(query) + " not found";
}

int main()
{
    optimize;
 
    int caso = 1;
    int N, Q;

    while (cin >> N >> Q && N != 0 && Q != 0) {
        vector<int> marmores(N);

        for (int i = 0; i < N; i++) {
            cin >> marmores[i];
        }

        cout << "CASE# " << caso << ":" << endl;

        for (int i = 0; i < Q; i++) {
            int query;
            cin >> query;
            cout << find_marble(marmores, query) << endl;
        }

        caso++;
    }

    return 0;
}