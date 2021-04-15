#include <bits/stdc++.h>

using namespace std;

int n, d;

int main (){
    cin >> n >> d;

    if(d <= 1){
        if(d <= n)
            cout << "NO\n";
            else {
            cout << "YES\n";
        }
    }
    else {
        cout << "YES\n";
    }
}