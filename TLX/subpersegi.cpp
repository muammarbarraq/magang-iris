#include <bits/stdc++.h>

using namespace std;

short int a, b, i;
int persegi;

int main (){
    cin >> a;
    for(i = 1; i <=a ; i++){
        persegi+=i*i;
    }

    cout << persegi;
}