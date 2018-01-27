//#include "bits/stdc++.h"
#include <bits/stdc++.h>
using namespace std;
#define SZ(x) x.size()
#define FO(i , n) for(int i = 0 ; i < n ; i++)

int main() {
    int number;
    cin >> number;
    int digit = number % 10;
    if(digit <= 5) number -= digit;
    else number += ( 10 - digit) ;
    cout << number << endl;
    
    return 0;
}

