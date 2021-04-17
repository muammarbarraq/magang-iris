#include <bits/stdc++.h>

using namespace std;

int main (){
    int a, b;
    cin >> a >> b;
    for(int i =0; i <= a ; i++){
        if(b % i == 0){
            cout << "*";
        }
    }
}