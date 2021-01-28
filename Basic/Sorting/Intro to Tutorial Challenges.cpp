#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    ll val, size;
    cin >> val;
    cin >> size;
    vector <ll> vec;
    for (ll i = 0; i<size; i++){
        ll x;
        cin >> x;
        vec.push_back(x);
    }

    if (binary_search(vec.begin(), vec.end(), val)){
        vector <ll>::iterator index;
        index = lower_bound(vec.begin(), vec.end(), val);
        cout << (index- vec.begin()) << endl;
    }


    return 0;
}