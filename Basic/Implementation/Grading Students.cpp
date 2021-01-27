#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> vec;

    int n;
    cin >> n;
    for (int i = 0; i<n; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }

    for (int i = 0; i<vec.size(); i++){
        if (vec[i]<40){
            if (vec[i] >= 35){
                if (40-vec[i] < 3){
                    vec[i] = 40;
                }
            }
            cout << vec[i] << endl;
            continue;
        }
        else if (vec[i]>40){
            int a = vec[i];
            for (int j = 1; j<5; j++){
                if ((a+j) % 5 == 0){
                    a += j;
                    break;
                }
            }
            if (a-vec[i] < 3){
                vec[i] = a;
            }
        }

        cout << vec[i] << endl;
    }
}