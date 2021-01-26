#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s){
    string sub = s.substr(0, 2);
    int a = stoi(sub);
    if (s[8] == 'A'){
        if(a>=12){
            a -= 12;
        }
        string b = to_string(a);
        sub = "0" + b;
        s.replace(0, 2, sub);
        return s;
    }
    else if (s[8] == 'P'){
        if (a<12){
            a+=12;
        }
        string b = to_string(a);
        sub = b;
        s.replace(0, 2, sub);
        cout << s << endl;
        return s;
    }
    else{
        return s;
    }
}

int main(){
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
