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
#include <map>
#define MAX_N 1000+5
#define endl "\n"
#define INF 2147483647
typedef long long ll;
//typedef pair<int, int> pii;
using namespace std;
vector<string> v;


int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n; cin >> n;
	string s;
	map <string, int> m;

	for (int i = 1; i <= n; i++) {
		cin >> s;
		int idx = s.find('.');
	
		s = s.substr(idx + 1);
		if (m.find(s) != m.end()) {
			m[s]++;
		}
		else m[s] = 1;
	}

	/*sort(m.begin(), m.end());*/ // MAP은 key값을 기준으로 오름차순 정렬 되어 있다.
	for (auto e : m) cout <<e.first << " " << e.second << endl;
}