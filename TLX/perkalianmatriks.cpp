#include <bits/stdc++.h>

using namespace std;

int main (){
    int a, b, c;
    int r1[120][120],r2[120][120],r3[120][120];

    cin >> a >> b >> c;
    for(int i = 1; i <= a;i++){
        for(int j = 1 ; j <= b ; j++){
            cin >> r1[i][j];
        }
    }
    for(int j = 1; j <= b ;j++){
        for(int k = 1; k<=c;k++){
            cin >> r2[j][k];
        }
    }
    for(int i = 1; i<= a; i++){
        for( int j = 1; j <= c; j++){
            r3[i][j]= 0;

            for(int k = 1; k <= b ; k++){
                r3[i][j] += r1[i][k] * r2[k][j];
            }

            cout << r3[i][j] << " ";

            if (j < 1){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0 ;
}