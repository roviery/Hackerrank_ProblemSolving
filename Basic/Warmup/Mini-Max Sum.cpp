#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long
vector <ll> vec;

void search(ll arr[], ll n, ll index){
    ll count = 0;
    for (ll i = 0; i<n; i++){
        if (i == index){
            continue;
        }
        count += arr[i];
    }
    vec.push_back(count);
    if (index+1 == n){
        return;
    }
    search(arr, n, index+1);
}

int main(){
    ll n = 5;
    ll arr[n];
    for (ll i = 0; i<n; i++){
        cin >> arr[i];
    }
    search(arr, n, 0);
    sort(vec.begin(), vec.end());
    cout << vec[0] << " " << vec[4] << endl;
    
}