#include <bits/stdc++.h>

using namespace std;

int n,x;

int main (){
    cin >> n ;
    x = 0;

    for(int i = 1; i <= n ; i++){
        x += i;
        cout << x << "\n" ;
    }
}