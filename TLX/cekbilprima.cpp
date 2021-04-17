#include <bits/stdc++.h>

using namespace std;

int a, b;

bool cek_prima(int x){
    for(int i = 2; i <= sqrt(x);i++)
    if (x % i == 0)return false;
    return true;
}

int main (){
    cin >> a;
    for (int i = 0; i < a;i++){
        cin >> b;
        if ((b > 1) && cek_prima(b)){
        cout << "YA" << endl;
        }
        else {
            cout << "BUKAN" << endl;
        }
    }
    return 0;
}