#include <bits/stdc++.h>

using namespace std;

int main (){
    int a, b, cek;
    cin >> a;

    for ( int i = 1; i <= a;i++){
        cin >> b;

        cek = 0;
        for ( int j = 2; j<= sqrt(b);j++){
            if (b % j == 0){
                cek++;
                if( cek == 2){
                    break;
                }
            }
        }
        if(cek == 0 || cek == 1){
            cout << "YA" << endl;
        }
        else{
            cout << "BUKAN" << endl;
        }
    }
}