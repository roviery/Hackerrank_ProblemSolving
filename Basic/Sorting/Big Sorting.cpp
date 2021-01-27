#include <bits/stdc++.h>

using namespace std;
// Use of comparator
//comparing function only sorts if string size is equal and keeps the larger integgers at last.
bool compare(string i, string j){
    int n = i.length();
    int m = j.length();
    if (n == m)
        return (i < j);

    return n < m;
}

int main(){
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), compare);

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    return 0;
}