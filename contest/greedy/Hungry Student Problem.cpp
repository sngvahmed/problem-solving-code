//#include "bits/stdc++.h"
#include <bits/stdc++.h>
using namespace std;
#define SZ(x) x.size()
#define FO(i , n) for(int i = 0 ; i < n ; i++)
map<int,bool> exist;

void rec(int tot){
    if(tot > 100 || exist[tot]){ return; }
    exist[tot] = true;
    rec(tot + 3) , rec(tot + 7);
}

int main() {
    
    int n;
    rec(0);
    cin >> n;
    while(n--){
        int tmp;
        cin >> tmp;
        if(exist[tmp]) cout << "YES" << endl; else cout << "NO" << endl;
    }
    return 0;
}

