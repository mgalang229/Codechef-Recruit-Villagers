#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, c;
	cin >> n >> m >> c;
	ll n1=0, n2=0;
	for(int i=0; i<n; ++i) {
		ll x, y, p;
		cin >> x >> y >> p;
		ll tmp=y-1LL*x*m-c;
		if(tmp>0)
			n1+=p;
		else
			n2+=p;
	}
	cout << max(n1, n2) << "\n";
}
