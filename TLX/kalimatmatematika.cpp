#include <bits/stdc++.h>

using namespace std;

int main (){
    int a, b;
    string op;

    cin >> a >> op >> b;

    if(op == "="){
        if( a == b) cout << "benar" << endl;
        else cout << "salah" << endl;
    }
    if(op == "<"){
        if(a < b) cout << "benar" << endl;
        else cout << "salah" << endl;
    }
    if (op == ">"){
        if(a > b) cout << "benar" << endl;
        else cout << "salah" << endl;
    }
    else if(op == "+") cout << a + b << endl;
    else if(op == "-") cout << a - b << endl;
    else if(op == "*") cout << a*b << endl;
}