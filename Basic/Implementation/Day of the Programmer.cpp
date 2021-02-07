#include <bits/stdc++.h>

using namespace std;

bool found = false;

void leap(int day, int month, int year){
    if (found == true){
        return;
    }
    if (month <= 7){
        if (month % 2 == 1){
            if (day-31 < 0){
                cout << day << ".0" << month << "." << year << endl;
                found = true;
            }
            else{
                leap(day-31, month+1, year);
            }
        }
        else{
            if (month == 2){
                if (day-29 < 0){
                    cout << day << ".0" << month << "." << year << endl;
                    found = true;
                }
                else{
                    leap(day-29, month+1, year);
                }
            }
            else{
                if (day-30 < 0){
                    cout << day << ".0" << month << "." << year << endl;
                    found = true;
                }
                else{
                    leap(day-30, month+1, year);
                }
            }
        }
    }

    else {
        if (month % 2 == 0){
            if (day - 31 < 0){
                if (month<10){
                    cout << day << ".0" << month << "." << year << endl;
                    found = true;
                }
                else{
                    cout << day << "." << month << "." << year << endl;
                    found = true;
                }
            }
            else{
                leap(day - 31, month + 1, year);
            }
        }
        else{
            if (day - 30 < 0){
                if (month < 10){
                    cout << day << ".0" << month << "." << year << endl;
                    found = true;
                }
                else{
                    cout << day << "." << month << "." << year << endl;
                    found = true;
                }
            }
        }
    }
}

void nonleap(int day, int month, int year){
    if (found == true){
        return;
    }
    if (month <= 7){
        if (month % 2 == 1){
            if (day - 31 < 0){
                cout << day << ".0" << month << "." << year << endl;
                found = true;
            }
            else{
                nonleap(day - 31, month + 1, year);
            }
        }
        else{
            if (month == 2){
                if (day - 28 < 0){
                    cout << day << ".0" << month << "." << year << endl;
                    found = true;
                }
                else{
                    nonleap(day - 28, month + 1, year);
                }
            }
            else{
                if (day - 30 < 0){
                    cout << day << ".0" << month << "." << year << endl;
                    found = true;
                }
                else{
                    nonleap(day - 30, month + 1, year);
                }
            }
        }
    }
    else{
        if (month % 2 == 0){
            if (day - 31 < 0){
                if (month < 10){
                    cout << day << ".0" << month << "." << year << endl;
                    found = true;
                }
                else{
                    cout << day << "." << month << "." << year << endl;
                    found = true;
                }
            }
            else{
                nonleap(day - 31, month + 1, year);
            }
        }
        else{
            if (day - 30 < 0){
                if (month < 10){
                    cout << day << ".0" << month << "." << year << endl;
                    found = true;
                }
                else{
                    cout << day << "." << month << "." << year << endl;
                    found = true;
                }
            }
        }
    }
}


void transition(int day, int month, int year){
    if (found == true){
        return;
    }
    if (month <= 7){
        if (month % 2 == 1){
            if (day - 31 < 0){
                cout << day << ".0" << month << "." << year << endl;
                found = true;
            }
            else{
                transition(day - 31, month + 1, year);
            }
        }
        else{
            if (month == 2){
                if (day - 15 < 0){
                    cout << day << ".0" << month << "." << year << endl;
                    found = true;
                }
                else{
                    transition(day - 15, month + 1, year);
                }
            }
            else{
                if (day - 30 < 0){
                    cout << day << ".0" << month << "." << year << endl;
                    found = true;
                }
                else{
                    transition(day - 30, month + 1, year);
                }
            }
        }
    }
    else{
        if (month % 2 == 0){
            if (day - 31 < 0){
                if (month < 10){
                    cout << day << ".0" << month << "." << year << endl;
                    found = true;
                }
                else{
                    cout << day << "." << month << "." << year << endl;
                    found = true;
                }
            }
            else{
                transition(day - 31, month + 1, year);
            }
        }
        else{
            if (day - 30 < 0){
                if (month < 10){
                    cout << day << ".0" << month << "." << year << endl;
                    found = true;
                }
                else{
                    cout << day << "." << month << "." << year << endl;
                    found = true;
                }
            }
        }
    }
}

int main(){
    int y;
    cin >> y;
    if (y > 1919){
        if ((y%4 == 0 && y%100 != 0) || y%400 == 0){
            // cout << "LEAP" << endl;
            leap(256, 1, y);
        }
        else{
            nonleap(256, 1, y);
        }
    }
    else if (y == 1918){
        transition(256, 1, y);
    }
    else{
        if (y%4 == 0){
            leap(256, 1, y);
        }
        else{
            nonleap(256, 1, y);
        }
    }


    return 0;
}