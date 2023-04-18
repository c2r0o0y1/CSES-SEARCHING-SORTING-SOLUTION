#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair


int main()
{
    ios::sync_with_stdio(0);
    ll n,m;
    cin >> n >> m;
    multiset<ll> s;

    for(ll i = 0 ; i < n ; i++){
        ll price;
        cin >> price;
        s.insert(price);
    }

    for(ll i = 0 ; i < m ; i++){
        int t;
        cin >> t;
        auto it = s.upper_bound(t);

        if(it == s.begin()){
            cout << -1 << "\n";
        }

        else{
            it--;
            cout << *it << "\n";
            s.erase(it);      
        }
    }

}

/*

*/