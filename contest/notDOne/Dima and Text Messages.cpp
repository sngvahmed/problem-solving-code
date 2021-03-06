//http://codeforces.com/contest/358/problem/B
#include <cstring>
#include <string.h>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <bitset>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <valarray>
#include <memory.h>
#include <climits>
#include <math.h>

using namespace std;

#define FO(i, a, x) for(int i = a; i < (int)x; i++)
#define FOR(i, x) FO(i, 0, x)
#define RO(i, a, x) for(int i = a; i >= x; i--)
#define ROF(i, x) for(int i = x; i >= 0; i--)
#define FORIT(it, x) for(typeof(x.begin()) it = x.begin(); it != x.end(); it++)
#define FOUND(s, x) find(all(s), x) != s.end()
#define NOTFOUND(s, x) find(all(s), x) == s.end()
#define SZ(x) (int)x.size()
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define pii pair<int, int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define MMS(x, v) memset(x, v, sizeof(x))
#define SQ(x) (x) * (x)

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned long ul;
typedef vector<string> vs;
typedef vector<int> vi;
vector<string> num;
int main() {
#ifndef ONLINE_JUDGE
	freopen("test.in", "rt", stdin);
//	freopen("o.txt", "wt", stdout);
#endif
//	cout << "shit:";
	int x, e = 0, i;
	scanf("%d", &x);
	FO(e,0,x) {
		string tmp;
		cin >> tmp;
		num.push_back(tmp);
	}
	string WD, oo = "";
	getline(cin, WD);
	getline(cin, WD);
	for (i = 0, e = 0; i < SZ(WD) && e < num.size(); e++) {
		string n1 = "";
		while (WD[i] != '<')
			i++;
		n1 += WD[i];
		while (WD[i] != '3') {
			i++;
		}
		n1 += WD[i];
		if (n1 != "<3") {
			cout << "no";
			return 0;
		}
		int y = 0;
		while (y != num[e].size() && i < WD.size()) {
			if (num[e][y] == WD[i])
				y++, i++;
			else
				i++;
		}
	}
	while (i < WD.size()) {
		if (oo == "<3")
			break;
		if (SZ(oo) == 0 && WD[i] == '<')
			oo += WD[i];
		if (SZ(oo) == 1 && WD[i] == '3') {
			cout << "yes";
			return 0;
		}
		i++;
	}
	cout << "no";
	return 0;
}
// @Copy Right To Ahmed Nasser
