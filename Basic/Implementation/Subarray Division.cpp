#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    vector <ll> vec;
    for (ll i = 0; i<n; i++){
        ll x;
        cin >> x;
        vec.push_back(x);
    }
    ll d, m;
    cin >> d >> m;

    ll conclusion = 0;
    for (ll i=0; i<vec.size(); i++){
        ll count = vec[i];
        for(ll j=i+1; j<i+m; j++){
            count += vec[j];
        }
        if (count == d){
            conclusion++;
        }
    }

    cout << conclusion << endl;

    return 0;
}