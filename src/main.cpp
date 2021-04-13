#include <bits/stdc++.h>

using namespace std;

int a, b ;
int r[1001];

int main (){
    cin >> a;
    for(int i = 0; i < 1001;i++){
        r [i]++;
    }
for(int i = 0;i < a; i++){
    cin >> b;
    r[b]++;
}
for(int i = 0; i <= 1000;i++){
    if(r[i] >= r[b]){
        b = i;
    }
}
    cout << b << endl;
    
}

#include <bits/stdc++.h>

using namespace std;


int main (){
    int a,b;
    int hasil;
    cin >> a;
    cout <<'\n'<< a;
    cin >> b;
    cout <<'\n' << b;
    hasil = a + b;
    cout << hasil << endl;

}

#include <bits/stdc++.h>

using namespace std;

int a, b;
int hasil ;

int main () {
    cin >> a;
    cout << " masukkan nama pertamamu :" << endl;
    cin >> b;
    cout << " masukkan nama keduamu :" << endl ;
    hasil = a + b ;
    cout << " nama panjangmu adalah " << hasil << endl;
}

