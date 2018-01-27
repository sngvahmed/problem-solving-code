//#include "bits/stdc++.h"
#include <bits/stdc++.h>
using namespace std;
#define SZ(x) x.size()
#define FO(i , n) for(int i = 0 ; i < n ; i++)

bool isExist(int year[] , int input[] , int inps){
    int ys = 24;
    FO(i , ys){
        if(year[i] == input[0]){
            int j = i , l = 0;
            while(l < inps && input[l] == year[j % ys]){
                j++ , l++;
            }
            if(l == inps) {
                return true;
            }
        }
    }
    return false;
}

int* appendCustom(int y1[] , int y2[]){
    int arr[24];
    for(int i = 0 ; i < 12; i++) arr[i] = y1[i];
    for(int i = 12 ; i < 24 ; i++) arr[i] = y2[i%12];
    
    return arr;
}

int main() {
    
    int years1[] = {31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};
    int years2[] = {31 , 29 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};
    
    int n;
    cin >> n;
    int input[n];
    FO(i,n){
        cin >> input[i];
    }
    
    if(isExist(appendCustom(years1, years1), input , n) ||
       isExist(appendCustom(years2, years2), input , n) ||
       isExist(appendCustom(years1, years2), input , n) ||
       isExist(appendCustom(years2, years1), input , n)){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}
