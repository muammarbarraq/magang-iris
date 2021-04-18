//BINA NUSANTARA PROGRAMMING CONTEST//

#include <bits/stdc++.h>

using namespace std;

void solve (){  
    string s;
    cin >> s;

    for(int i = 0 ; i < s.length() ; i++){ 
        if (i % 2 == 0){
            int cek = s[i] - 'a';
            int awok = cek - 32;
            s[i] = awok + 'a' ;
        }
        cout << s[i];
    }
    cout << endl;
}

int main (){

    int x;
    cin >> x;

    while (x--) solve ();
    return 0;
}