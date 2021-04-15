#include <bits/stdc++.h>

using namespace std;

int n, m; 
int main (){
    cin >> n >> m;

    if (1 <= n <= 100){
        if (1 <= m <= 100){
            for(int i = 1; i <= n ; i++){
                for(int j = 1 ; j <= m ; j++){
                     if(i % 2 == 0 && j % 2 == 0){
                        cout << "#" ;
                    }
                    else if(i % 2 == 1 && j % 2 ==1 ) {
                        cout << "*";
                    }
                    else if ( i % 2 == 0 || j % 2== 0){
                        cout << "$";
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}