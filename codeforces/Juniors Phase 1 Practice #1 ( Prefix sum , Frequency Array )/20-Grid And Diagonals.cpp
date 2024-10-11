#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
#define ll long long
#define double long double
#define endl "\n"
#define sz(s) (int)s.size()
#define all(v) (v).begin(),(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define fx(x) fixed<<setprecision(x)
#define INF (ll)1e9
#define ll long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
void File() {
#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#else
	//freopen("Input.txt", "r", stdin);
	//freopen("Output.txt", "w", stdout);
#endif
}


void solve() {
	int n, m, q; cin >> n >> m >> q;
	ll arr1[n+2][m+2];
	ll arr2[n+2][m+2];
	for (int i = 0; i <= n+1; i++) {
		for (int j = 0; j <= m+1; j++) {
			arr1[i][j] = 0;
			arr2[i][j] = 0;
		}
	}
	while (q--) {
	     int t;cin>>t;
        int x,y,k,val;
        cin>>x>>y>>k>>val;
        if(t==1){
        arr1[x][y]+=val;
        if(x+k<=n && y+k<=m)
        arr1[x+k][y+k]-=val;
 
        }
        else{
        arr2[x][y]+=val;
        if(x+k<=n && y-k>=1)
        arr2[x+k][y-k]-=val;
 
        }
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			arr1[i][j] += arr1[i - 1][j - 1];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			arr2[i][j] += arr2[i - 1][j + 1];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
		     if(arr1[i][j]+arr2[i][j]>=0)
            cout<<arr1[i][j]+arr2[i][j]<<' ';
            else cout<<0<<' ';
		}
		cout << endl;
	}
}

int main() {
	IOS;
	File();
	int t = 1;
	while (t--) {
		solve();
	}
}