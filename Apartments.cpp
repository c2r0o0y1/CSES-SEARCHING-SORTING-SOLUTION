#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
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
    ll n,m,k;
    cin >> n >> m >> k;

    ll applicants[n], apartments[m];

    for(ll i = 0 ; i < n ; i++){
        cin >> applicants[i];
    }

    for(ll i = 0 ; i < m ; i++){
        cin >> apartments[i];
    }
    sort(applicants,applicants+n);
    sort(apartments,apartments+m);

    int res = 0;
    int i = 0 , j = 0;

    while(i < n && j < m){
        if(abs(apartments[j]-applicants[i]) <= k){
            res++;
            i++;
            j++;
        }
        else if(applicants[i] < apartments[j]){
            i++;
        }
        else{
            j++;
        }
    }

    cout << res << "\n";

}