#include <bits/stdc++.h>

using namespace std;

int main (){
    string a, b;
    cin >> a >> b;
    bool bisa = 1;
    int batas = 0;
    if(a.length()-1 != b.length())bisa= 0;
    else {
        int j = 0;
        for (int i = 0; i < a.length(); i++){
            if(a[i] != b[j]){
                batas++;
                i++;
            }
            j++;
        }
    }
    if(batas == 1 && bisa == 1){
        cout <<"Tentu saja bisa!\n";
    }
    else {
        cout << "Wah, tidak bisa :(\n";
    }
}