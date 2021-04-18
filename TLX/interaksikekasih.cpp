//Toki regular open contest#19//

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;

    int pref[n+2], suff[n+2];
    pref[0]=0;
    suff[n+1]=0;

    for (int i = 1 ; i <= n ; i++){
        cout << "? 1 " << i << endl;
        cout << flush;
        cin >> pref[i];

        cout << "? " << i << " " << n << endl;
        cout << flush;
        cin >> suff[i];
    }

    vector<int> ans;
    for (int i = 1; i <= n ; i++){
        if(pref[i] == pref[i-1]+1 && suff[i] == suff[i + 1] + 1) ans.push_back(i);
    }

    cout << "! " << ans.size();
    for (int i = 0 ; i < ans.size(); i++){
        cout << " " << ans[i];
    }
    cout << endl;
}

