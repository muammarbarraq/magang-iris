//PAKET SOAL LATIHAN TOKI//

#include <bits/stdc++.h>

using namespace std;
int waktu[101];
int main (){
    int x, y, z;
    int a, aa, b, bb, c, cc;
    cin >> x >> y >> z;
    cin >> a >> aa >> b >> bb >> c >> cc ;

    int jumlah = 0;
    for(int i = a; i < aa ; i++){
            waktu[i]++;
    }
    for(int i = b ; i < bb ; i++){
        waktu[i]++;
    }
    for (int i = c ; i < cc ; i++){
        waktu[i]++;
    }
    for(int i = 1; i <101;i++){
        if(waktu[i] == 1){
            jumlah += x;
        }
        else if(waktu[i] == 2){
            jumlah += (y*2);
        }
        else if(waktu[i] == 3 ){
            jumlah += (z*3);
        }
    }
    cout << jumlah;
}