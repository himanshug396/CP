/*
_subarray
Find the number of subarrays having equal number of odd and even elements
https://www.hackerearth.com/challenge/competitive/airtel-crack-the-code/algorithm/odd-even-subarrays-72ad69db/

O(nlogn)
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
const int inf=1e16, mod=1e9+7, N=2e6+10;



#undef int
int main() {
#define int long long

    int n; cin >> n;
    vi a(n); rep(i,n) cin >> a[i];
    rep(i,n) a[i] = ((a[i]&1) ? 1:-1);
    
    map<int,int> yet;
    int off=0, ans=0; rep(i,n) {
        yet[-off]++;
        off += a[i];
        ans += yet[-off];
    }
    cout << ans;
    return 0;
}