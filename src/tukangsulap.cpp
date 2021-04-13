#include <bits/stdc++.h>

using namespace std;

int n ;
int q ;
int r[2][1001];

void swap(int &a, int &b){
    int temp = a;
    a = b ;
    b = temp;
}
int main (){
    cin >> n;
    for ( int i = 0;i < 2 ;i++){
        for(int j = 0;j < n; j++){
                cin >> r[i][j];
        }
    }
    cin >> q ;
    for (int i = 0; i < q; i++){
        char buff1[5], buff2[5];
        int x, y;
        cin >> buff1 >> x >> buff2 >> y;
    
    int a = buff1[0] - 'A';
    int b = buff2[0] - 'A';
    x--;
    y--;
    swap(r[a][x], r[b][y]);
    }
    for(int i = 0;i < 2; i++){
        for (int j = 0 ; j < n; j++){
            cout << r [i][j];
            if (j+1 < n){
                cout << " ";
            }
        }
        cout << "\n" << endl;
    }
}
