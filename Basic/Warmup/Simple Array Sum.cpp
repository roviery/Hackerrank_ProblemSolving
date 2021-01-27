#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    int hasil = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        hasil += arr[i];
    }

    cout << hasil << endl;

    return 0;
}
