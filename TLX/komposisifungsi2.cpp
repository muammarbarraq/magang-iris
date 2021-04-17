#include <bits/stdc++.h>



using namespace std;

int a, b ,x,k;

int fungsi(int k){
    if (k == 1){
        return abs((a*x+b));
    }
    else {
        return abs(a*fungsi(k-1) + b);
    }
}
int main (){
    int k;
    cin >> a >> b >> x >> k ;

    cout << fungsi(k);
}
