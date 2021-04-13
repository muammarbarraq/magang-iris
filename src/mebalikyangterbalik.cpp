#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int reverse (int x){
    int temp = x;
    int ret = 0;

    while ( temp > 0){
        ret = (ret * 10 ) + (temp % 10 );
        temp = temp/10;
    }
    return ret ;
}

int main (){
    cin >> a >> b ;

    c = reverse(a) + reverse(b);
    c = reverse (c);

    cout << c << endl;
}