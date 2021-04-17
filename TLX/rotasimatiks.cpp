#include <bits/stdc++.h>

using namespace std;

int main (){
    int a, b;
    int arr[105][105];

    cin >> a >> b;

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= b;i++){
        for(int j = a; j >=1 ; j--){
                cout << arr[j][i] << " ";
        }
        cout << "\n" << endl;
    }
}