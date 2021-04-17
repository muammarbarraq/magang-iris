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
    zebra Zebra;
    dolphin lumbalumba;

    Zebra.info(12,"ari");
    lumbalumba.info(15,"akil");
    Zebra.value();
    lumbalumba.value();

    return 0;
}