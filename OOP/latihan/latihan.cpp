#include <iostream>

using namespace std;

class bentuk {
    public :
    int a , b;  //deklarasi
    int area () {
        return a*b; //luas persegi panjang (p*l)
    }
};

int main (){
    bentuk segitiga ;  
    cout << "panjang : " ;  
    cin >> segitiga.a;  //input nilai a
    cout << "lebar : ";
    cin >> segitiga.b; //input nilai b

    cout << "luas : " << segitiga.area(); //hasil dari luas

    return 0;

}