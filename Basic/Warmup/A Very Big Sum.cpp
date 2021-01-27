#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long int arr[n];
    long int hasil = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        hasil += arr[i];
    }

    cout << hasil << endl;
    return 0;
}
