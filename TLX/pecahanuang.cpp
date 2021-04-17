#include <bits/stdc++.h>

using namespace std;

int n, t, x[100001],y;

int main (){
    cin >> n;

    t=0;
    while(n>=1000){
        n-=1000;
        t++;
    }
    if(t!=0){
        cout << "1000" << " " << t << endl;
    }
    t=0;
    while(n>=500){
        n-=500;
        t++;
    }
    if(t!=0){
        cout << "500" << " " << t << endl;
    }

    while(n>=200){
        n-=200;
        t++;
    }
    if(t!=0){
        cout << "200" << " " << t << endl;
    }
    while(n>=100){
        n-=100;
        t++;
    }
    if(t!=0){
        cout << "100" << " " << t << endl;
    }
    while(n>=50){
        n-=50;
        t++;
    }
    if(t!=0){
        cout << "50" << " " << t << endl;
    }
    while(n>=20){
        n-=20;
        t++;
    }
    if(t!=0){
        cout << "20" << " " << t << endl;
    }
    while(n>=10){
        n-=10;
        t++;
    }
    if(t!=0){
        cout << "10" << " " << t << endl;
    }
    while(n>=5){
        n-=5;
        t++;
    }
    if(t!=0){
        cout << "5" << " " << t << endl;
    }
    if(t!=0){
        cout << "10" << " " << t << endl;
    }
    while(n>=2){
        n-=2;
        t++;
    }
    if(t!=0){
        cout << "2" << " " << t << endl;
    }
    while(n>=1){
        n-=1;
        t++;
    }
    if(t!=0){
        cout << "1" << " " << t << endl;
    }
    return 0;
}
