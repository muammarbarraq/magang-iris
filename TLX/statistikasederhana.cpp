#include <bits/stdc++.h>

using namespace std;

int main (){
    int a,b;
    cin >> a;
    int min = 100000, max=-100000;

    for (int i = 1; i <=a;i++){
        cin >> b;

        if (b > max){
            max = b;
        }
        if ( b < min){
            min = b;
        }
    }
    cout << max << " " << min << endl;
}