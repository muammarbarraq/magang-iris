#include <bits/stdc++.h>

using namespace std;

int t,n,m,score[80],tobesearched;
string id[80],mencari;

int main (){
    cin >> t;

    for (int i = 1 ; i <= t ;i++){
        cin >> n >> m;
        cin >> mencari ;

        //input untuk mencari score setiap contestan
        for (int i = 0 ; i < n ;i++){
            int tempA,tempB,tempC;

            cin >> id[i] >> tempA >> tempB >> tempC;
            score[i]= tempA + tempB*1000 + tempC * 10000000;

            if(mencari == id[i]){
                tobesearched = score[i];
            }
        }

        //seleksi array 'score'
        for(int i = 0 ; i < 8 ; i++){
            for (int j = i; j > 0 ; j-- ){
                if(score[j] > score[j-1]){
                    int temp = score[j-1];
                    score[j-1]= score[j];
                    score[j]=temp;
                }
            }
        }
        
        //mengecek jika tobesearched merupakan score m posisi pertama
        bool lolos = false;
        for(int i = 0 ; i < m ; i++){
            if(tobesearched == score[i]){
                lolos = true;
            }
        }
        if(lolos){
            cout << "YA\n";
        }
        else {
            cout << "TIDAK\n";
        }
    }
}
