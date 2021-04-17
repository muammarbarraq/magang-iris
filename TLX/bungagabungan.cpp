#include <bits/stdc++.h>

using namespace std;

int main (){
    int p, q;
    int total;
    cin >> p >> q;

    total = p*p + q*q + 1;

    if(total % 4 == 0){
        cout << total << endl;
    }
    else{
        cout << "-1" << endl;
    }
}