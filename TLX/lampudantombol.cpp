#include <bits/stdc++.h>

using namespace std;

int main (){
    long long a;
    cin >> a;

    long long b = round(sqrt(a));

    if(b * b != a){
        cout << "lampu mati" << endl;
    } 
    else {
        cout << "lampu hidup" << endl;
    }
}