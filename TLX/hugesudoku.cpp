#include <bits/stdc++.h>

using namespace std;

int main (){
    int n,res = 0;
    cin >> n;
    int arr[n*n][n*n];
    for(int i = 0 ; i < n * n ; i++){
        for(int j = 0 ; j < n * n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i <=n * n; i++){
        res = res + i;

    }
    cout << res << endl;
}

//masih perlu dipelajari 