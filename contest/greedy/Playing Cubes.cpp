// C++ program for an efficient solution to check if
// a given array can represent Preorder traversal of
// a Binary Search Tree
#include<bits/stdc++.h>
using namespace std;

pair<int,int> getOptimalPlay(int n, int m, char c, char who, int rp, int rv){
    
    while(n || m){
        if(n == 0){ return make_pair(rp + (m - 1), rv); }
        if(m == 0){ return make_pair(rp + (n - 1), rv); }
        
        if (who == 'P'){
            if (c == 'R'){ n--; }
            else { m--; }
            rp++; who = 'V';
        }else{
            if (c == 'R'){ n--; c = 'B'; }
            else { m--; c = 'R';}
            rv++; who = 'P';
        }
    }
    return make_pair(rp, rv);
}

int main() {
    int n, m;
    cin >> n >> m;
    pair<int,int> res = getOptimalPlay(min(n,m), max(n,m), 'R', 'V', 0, 0);
    cout << res.first << " " << res.second << endl;
    return 0;
}


