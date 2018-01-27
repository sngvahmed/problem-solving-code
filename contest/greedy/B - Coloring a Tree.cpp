#include <bits/stdc++.h>
using namespace std;
#define SZ(x) x.size()

map<int , int> color;
map<int, vector<int> > mp;

int isColored = 0;

void colorIt(int cur , int prevColor){
    if(prevColor != color[cur]) isColored++;
    
    for(int i = 0 ; i < mp[cur].size() ; i++){
        colorIt(mp[cur][i] , color[cur]);
    }
}

int main() {
    
    int x;
    cin >> x;
    
    for (int i = 2; i <= x; i++) {
        int tmp; cin >> tmp;
        mp[tmp].push_back(i);
    }
    
    for(int i = 0 ; i < x ; i++){
        int tmp; cin >> tmp;
        color[i+1] = tmp;
    }
    colorIt(1 , -1);
    cout << isColored << endl;
    return 0;
}

