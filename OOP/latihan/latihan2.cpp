#include <bits/stdc++.h>

using namespace std;

class angka {
    private :
    int angka1;
    int angka2;
    public :
    angka (int angka1,int angka2){
        cout << angka1 * angka2 << endl;
    }
};

int main (){
   int x,y;
   cin >> x >> y ;

    angka bilangan(x,y);
    return 0;
}
