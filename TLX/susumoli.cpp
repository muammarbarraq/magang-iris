#include <bits/stdc++.h>

using namespace std;

int i,t,n[100],a[100],b[100],k[100];

int main (){
    cin >> t;

    for(i = 0; i < t ; i++){
        cin >> n[i] >> a[i] >> b[i] >> k[i];
    }
    for(i = 0;i < t;i++){
        cout << "Kasus #" << i+1 << ": " << n[i]+(b[i]-a[i])*k[i] << endl;

    }
    return 0;
}