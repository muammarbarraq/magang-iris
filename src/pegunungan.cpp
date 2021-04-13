#include <bits/stdc++.h>

using namespace std;

int a;

void gambar(int n){
    if ( n == 1){
        cout << "*\n" << endl;
    }
    else {
        gambar (n - 1);
        for (int i = 0; i < n ; i++){
            cout << "*";
        }
    cout << "\n";
    gambar(n- 1);
    }
}

int main (){
    cin >> a;
    gambar(a);

    return 0;
}