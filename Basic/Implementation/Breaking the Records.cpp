#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int score[n];
    int max, min;
    int inc = 0;
    int dec = 0;
    for (int i = 0; i<n; i++){
        cin >> score[i];
        if (i==0){
            max = score[i];
            min = score[i];
        }
        if (i>0){
            if (max<score[i]){
                max = score[i];
                inc++;
            }
            if (min>score[i]){
                min = score[i];
                dec++;
            }
        }
    }

    cout << inc << " " << dec << endl;


    return 0;
}