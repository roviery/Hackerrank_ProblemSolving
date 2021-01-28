#include <bits/stdc++.h>

using namespace std;

void inSort(vector<int> vec){
    int under = 0;
    for (int i = 0; i < vec.size() - 1; i++){
        if (vec[i] > vec[i + 1]){
            under = vec[i + 1];
            int j = i;
            while (under < vec[j]){
                vec[j + 1] = vec[j];
                j--;
                for (int k = 0; k < vec.size(); k++)
                    cout << vec[k] << " ";
                cout << endl;
            }
            vec[j + 1] = under;
        }
    }
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}
int main(void){
    vector<int> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    inSort(vec);
    return 0;
}