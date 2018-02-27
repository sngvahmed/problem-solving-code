#include "bits/stdc++.h"
using namespace std;
#define o(i,n) for(int i = 0 ; i < n; i++)

int main (){
    int n, steps1, steps2;
    
    cin >> n;
    int a1[n], a2[n];
    
    o(i, n){ cin >> a1[i]; }
    o(i, n){ cin >> a2[i]; }
    
    steps1 = steps2 = 0;
    
    o(i, n){
        if ( a1[i] == a2[i]) continue;
        int sum = abs(a1[i] - a2[i]);

        if( a1[i] < a2[i] ) {
            if ( sum % 2 == 0){
                steps1 += sum / 2;
            }else {
                steps1 += ((sum / 2) + 1), steps2 += 1;
            }
        }else {
            steps2 += sum;
        }
    }
    
    if( steps2 <= steps1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    
    return 0;
}



