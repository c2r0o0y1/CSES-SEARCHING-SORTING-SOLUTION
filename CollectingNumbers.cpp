#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define print(a) cout << a << "\n";
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

    vector<int> idx(n+1);
    for(int i = 0 ; i < n+1 ; i++){
        int x;
        cin >> x;
        idx[x] = i;
    }

    idx[0] = 0;

    int count = 1;

    for(int i = 1 ; i < n+1 ; i++){
        if(idx[i] < idx[i-1]){
            count++;
        }
    }
    
    print(count);
}

