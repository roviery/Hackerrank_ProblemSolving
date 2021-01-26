#include <bits/stdc++.h>

using namespace std;
#define ll long long
vector <ll> vec;


int main(){
    ll n;
    cin >> n;
    for (ll i = 0; i<n; i++){
        ll x;
        cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());
    ll a = 0;
    ll search = vec[vec.size()-1];
    for (ll i = vec.size()-1; i>=0; i--){
        // cout << "VEC = " << vec[i] << endl;
        // cout << "SEARCH = " << search << endl;
        if (vec[i] == search){
            a++;
        }
    }
    cout << a << endl;
}