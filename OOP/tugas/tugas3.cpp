#include <bits/stdc++.h>

using namespace std;

class animal {
    public :
    int umur;
    string nama;
    void info(int x,string y){
        umur = x;
        nama = y;
    }
};

class zebra : public animal {
    public :
    void value (){
        cout <<"namanya " << nama << " umurnya " << umur << ","<< "zebra termasuk golongan hewan mamalia, " << "zebra berasal dari afrika " << "\n";
    }
};

class dolphin : public animal {
    public :
    void value (){
        cout <<"namanya "<< nama << " umurnya " << umur << "," << "lumba lumba termasuk golongan hewan mamalia, " << "lumba lumba berasal dari laut utara australia ";
    }
};

int main (){
    int x,p;
    string y,z;
    zebra Zebra;
    dolphin lumbalumba;
    cin >> x >> y;
    cin >> p >> z;

    Zebra.info(x,y);
    lumbalumba.info(p,z);
    Zebra.value();
    lumbalumba.value();

    return 0;
}