#include <bits/stdc++.h>

using namespace std;

int main (){
    int a;
    int b = 0;
    cin >> a;
    for(int i = 1; i <= a; i++){
        for (int j = 1;j <=i ; j++){
            cout << b;
            if (b == 9){
                b = 0;
            }
            else {
                b += 1;
            }
        }
        cout << "\n";
    }
}