#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <queue>
#include <cstring>
#include <tuple>
#include <cmath>
#include <cstdlib> 
#include <math.h>
#define MAX_N 1000+5
#define endl "\n"
#define INF 2147483647
typedef long long ll;
//typedef pair<int, int> pii;
using namespace std;
vector<string> v;
bool comp(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n; cin >> n;
	string s;
	for (int i = 1; i <= n; i++) {
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), comp);
	v.erase(unique(v.begin(), v.end()), v.end());
	for (auto e : v) cout << e << endl;

}