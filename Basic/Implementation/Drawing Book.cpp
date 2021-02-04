#include <bits/stdc++.h>

using namespace std;
int halFirst[2] = {0, 1};
bool foundFirst = false, foundLast = false;
int pageFirst, pageLast;


void first(int n, int p, int count){
    if (foundFirst == true){
        return;
    }
    for (int i = 0; i<2; i++){
        // cout << "HALFIRST = " << halFirst[i] << endl;
        // cout << "p = " << p << endl;
        // cout << "Count = " << count << endl;
        if (halFirst[i] == p){
            pageFirst = count;
            foundFirst = true;
        }
    }

    halFirst[0] += 2;
    halFirst[1] += 2;
    first(n, p, count+1);
}

void last(int arr[], int n, int p, int count){
    if (foundLast == true){
        return;
    }
    for (int i = 0; i < 2; i++){
        // cout << "HALFIRST = " << halFirst[i] << endl;
        // cout << "p = " << p << endl;
        // cout << "Count = " << count << endl;
        if (arr[i] == p){
            pageLast = count;
            foundLast = true;
        }
    }

    arr[0] -= 2;
    arr[1] -= 2;
    last(arr, n, p, count + 1);
}

int main(){
    int n, p;
    cin >> n >> p;
    int halLast[2] = {n, n+1};
    if (n%2 == 1){
        halLast[0] = n-1;
        halLast[1] = n;
    }
    first(n, p, 0);
    last(halLast, n, p, 0);

    if(pageFirst<pageLast){
        cout << pageFirst << endl;
    }
    else{
        cout << pageLast << endl;
    }

    return 0;
}