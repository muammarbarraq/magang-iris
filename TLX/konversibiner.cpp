#include <bits/stdc++.h>

using namespace std;

int a;

void biner(int x){
    if(x == 0){
        return;
    }
    biner(x/2);
    cout << x%2;
}

int  main (){
    cin >> a;
    biner(a);
}