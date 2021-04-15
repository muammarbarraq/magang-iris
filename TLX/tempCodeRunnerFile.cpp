#include <bits/stdc++.h>

using namespace std;

void tukar(int *a, int *b){
     *a = *a ^ *b;
     *b = *a ^ *b;
     *a = *b;
}

void balik(int *arr){
    for ( int i=0, j =4; i < 2; i++){
        tukar(&arr[i],&arr[j]){
            j--;
        }
    }
}