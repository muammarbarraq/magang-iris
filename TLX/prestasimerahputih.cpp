#include <bits/stdc++.h>

using namespace std;

int n,a[8],x;

int main (){
    cin >> n ;

    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }

    cin >> x;
    for(int i = 0; i < n ; i++){
        if(a[i]==x){
            cout << i+1 << endl;
        }
    }
}