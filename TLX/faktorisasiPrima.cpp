#include <bits/stdc++.h>

using namespace std;

int n,i;

void faktorisasiprima(int x){
    int temp = x;
    int a = 0;

    for ( i = 2; i <= x ; i++){
        int f = 0;
        while(temp%i == 0){
            a = i;
            temp = temp/i;
            f++;
        }
        if(f > 1 && i == a){
            cout << i << "^" << f << " ";
            if( temp > 1)cout << "x" << " ";
            else cout << endl;
        } 
        else if(i == a){
            cout << i << " ";
            if( temp > 1)cout << "x" << " ";
            else cout << endl;
        }
    }
}

int main (){
    cin >> n;
    faktorisasiprima(n);
}