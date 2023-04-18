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
    int n;
    cin >> n;
    pair<int,int> arr[2*n];

    int k = 0;

    for(int i = 0 ; i < n ; i++){
        int a,b;
        cin >> a >> b;
        arr[++k] = {a,1};
        arr[++k] = {b,-1};
    }

    sort(arr,arr+2*n);

    int res = INT_MIN;
    int curr = 0;

    for(int i = 0 ; i < 2*n ; i++){
        curr += arr[i].second;
        res = max(res,curr);
    }
    cout << res << "\n";
}

/*
we can also use greedy scheduling algo
*/