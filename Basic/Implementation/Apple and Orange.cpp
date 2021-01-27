#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
    ll s, t, a, b, m, n, aa = 0, oo = 0;
    vector <ll> apples;
    vector <ll> oranges;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    for (ll i = 0; i<m; i++){
        ll x;
        cin >> x;
        x += a;
        apples.push_back(x);
        if (x >= s && x<=t){
            aa++;
        }
    }

    for (ll i = 0; i<n; i++){
        ll x;
        cin >> x;
        x += b;
        oranges.push_back(x);
        if (x >= s && x<= t){
            oo++;
        }
    }

    cout << aa << endl;
    cout << oo << endl;


    return 0;
}