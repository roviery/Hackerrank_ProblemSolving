#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }

    ll count = 0;
    for (int i = 0; i<n-1; i++){
        for (int j = i+1; j<n; j++){
            if ((arr[i]+arr[j]) % k == 0){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}