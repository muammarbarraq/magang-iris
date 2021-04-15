#include <bits/stdc++.h>
using namespace std;

int main (){
    int a, i;

    cin >> a;
    for (i = 1; i<=a;i++){
        if (i%10 == 0){
            continue;
        }
        if (i == 42){
            cout << "ERORR" << endl;
            break ;
        }
        else {
            cout << i << endl;;
        }
    }
    return 0;
}