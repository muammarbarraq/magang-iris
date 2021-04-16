#include <iostream>

using namespace std;

class Bentuk{
    public :   // lebih baik di private atau di protected
    int panjang ,lebar ;    // deklarasi panjang dan lebar 
 
    void data (int a, int b){   
        panjang = a; //nilai a
        lebar = b;  // nilai b
    }

};

class persegipanjang : public Bentuk {  // sub class persegi panjang
    public :
    int area (){
        return (panjang*lebar); //luas persegi panjang (p*l)
    }
};

class segitiga : public Bentuk{ // sub class segitiga 
    public :
    int area (){
        return (panjang*lebar/2); // luas segitiga (p*l/2)
    }
};

int main (){
    segitiga myobj1;
    persegipanjang myobj2;
    
    myobj1.data(4,8);   // data diambil dari class bentuk 
    myobj2.data(6,9);   // data diambil dari class bentuk
    
    cout << "Luas segitiga       : " << myobj1.area() << endl;
    cout << "Luas persegipanjang : " << myobj2.area() << endl;
    
    return 0;
}