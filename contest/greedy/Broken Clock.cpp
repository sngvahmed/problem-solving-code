// C++ program for an efficient solution to check if
// a given array can represent Preorder traversal of
// a Binary Search Tree
#include<bits/stdc++.h>
using namespace std;

string fix24(string text){
    
    if(text[0] > '2'){
        text[0] = '1';
    }
    
    if(text[0] == '2' && text[1] >= '4') text[0] = '0';
    
    if(text[3] >= '6'){
        text[3] = '0';
    }
    
    return text;
}

string fix12(string text){
    if(text[0] > '1'){
        text[0] = '0';
    }
    if(text[0] == '0' && text[1] == '0') text[0] = '1';
    
    if(text[0] == '1' && text[1] > '2') text[0] = '0';
    
    if(text[3] >= '6'){
        text[3] = '0';
    }
    
    return text;
}

int main() {
    int n;
    string text;
    
    cin >> n;
    cin >> text;
    string res;
    if (n == 12){
        res = fix12(text);
    }else {
        res = fix24(text);
    }
    
    cout << res << endl;
    return 0;
}




