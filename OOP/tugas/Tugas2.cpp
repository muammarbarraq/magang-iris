#include <iostream>

using namespace std;

class mother {
    public :
    void display (){
            cout << "ibu" << "\n";  
    }
};

class daughter {
    public :
    void display (){
        cout << "anak perempuan" ; 
    }
};

int main (){
    mother anin;
    daughter dita;
    anin.display(); 
    dita.display();
    return 0;
}