#include <iostream>

using namespace std;

class bentuk {
    public :
    int a , b;
    int area () {
        return a*b;
    }
};

int main (){
    bentuk segitiga ;
    cout << "panjang : " ;
    cin >> segitiga.a;
    cout << "lebar : ";
    cin >> segitiga.b;

    cout << "luas : " << segitiga.area();

    return 0;

}