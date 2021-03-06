/*
2D _subarray _bitset

O(n^2*m/30)
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long double dbl;
typedef pair<int,int> pii;
typedef vector<int> vi;

#define X first
#define Y second
#define mp make_pair
#define pb push_back
#define all(c) begin(c), end(c)
#define mem(c,v) memset(c, v, sizeof c)
#define uni(c) c.resize(distance(c.begin(), unique(all(c))))

#define rep(i,n) for(int i=0, _n=(n); i<_n; i++)
#define rep1(i,n) for(int i=1, _n=(n); i<=_n; i++)
#define cout(d) cout << fixed << setprecision(d)
#define err(x) cerr << #x << " = " << x << "\n"

#define cases int _t_; cin >> _t_; rep1(_t,_t_)
#define coutt cout << "Case " << _t << ": "
#define io ios_base::sync_with_stdio(false); cin.tie(NULL);

const dbl eps=1e-12, pi=acosl(-1);
const int inf=1e16, mod=1e9+7, N=1515;
bitset<N> a[N];

#undef int
int main() {
#define int long long

    int n, m; cin >> n >> m;
    rep1(i,n) {
        string s; cin >> s;
        rep1(j,m) a[i][j] = (s[j-1]=='1')^a[i-1][j]^a[i][j-1]^a[i-1][j-1];
    }
    
    int ans=0; rep1(i,n)rep(j,i) {
        int x = (a[i]^a[j]).count();
        ans += x*(x-1)/2 + (m-x)*(m-x+1)/2;
    }
    cout << ans << '\n';
    return 0;
} 