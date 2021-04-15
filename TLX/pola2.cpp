#include <bits/stdc++.h>

using namespace std;

int main (){
    int a, i, j;
    cin >> a;
    for ( i = 0; i <= a; i++){
        for( j = 0; j < a; j++){
            if( j < a-i){
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
}