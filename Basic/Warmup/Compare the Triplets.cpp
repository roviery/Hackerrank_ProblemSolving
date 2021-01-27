#include <iostream>

using namespace std;

int main(){
    int a[3];
    int b[3];

    for (int i = 0; i < 3; i++){
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++){
        cin >> b[i];
    }

    int a_score = 0;
    int b_score = 0;
    for (int i = 0; i < 3; i++){
        if (a[i] > b[i]){
            a_score++;
        }
        else if (a[i] < b[i]){
            b_score++;
        }
        else{
            continue;
        }
    }

    cout << a_score << " " << b_score << endl;
    return 0;
}
