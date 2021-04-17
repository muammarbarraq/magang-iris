#include <bits/stdc++.h>

using namespace std;

class nilai{
    public :
    float x,y;

	nilai(float nilaix, float nilaiy){

	x=nilaix;
    y=nilaiy;
    }
};

int main(){
    //angka ke 1
	float angka1,angka2;
    cout<< "masukkan nilai real:";
	cin>> angka1;
	
    cout<< "masukkan nilai imaginer:";
	cin>> angka2;
	nilai bilangan1(angka1,angka2);
	
    //angka ke 2
    float angka3,angka4;
    cout<< "masukkan nilai real:";
	cin>> angka3;
	cout<< "masukkan nilai imaginer:";
	cin>> angka4;
	
	nilai bilangan2(angka3,angka4);

	float real;
    float imagin;

    real = bilangan1.x +bilangan2.x;
    imagin = bilangan2.x + bilangan1.y;



    cout << "bilangan real : " << real << "\n";
    cout << "bilangan imaginer : " << imagin;

    return 0;
}