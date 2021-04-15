#include <bits/stdc++.h>

using namespace std;

int n, m; //deklarasi
int main (){
    cin >> n >> m;

    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(j % 2 == 1){
                cout << "*" ;
            }
            else {
                cout << "#";
            }
        }
        cout << endl;
    }
}