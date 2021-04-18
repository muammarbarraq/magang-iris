//TOKI REGULAR OPEN CONTEST #9 (DIV.2)//

#include <bits/stdc++.h>

using namespace std;

int main (){
    string a;
    int t = 0;
    cin >> a;
    for(int i = 0 ; i < a.size () ; i++){
        if (a[i] == 'O') t++;
    }
    if (t == 1) {
        cout << "Ya";
    }
    else {
        cout << "Tidak";
    }
}

//input : a

// output :Sebuah baris yang berisi "Ya",jika string tersebut recommended, atau "Tidak", jika string tidak recommended.