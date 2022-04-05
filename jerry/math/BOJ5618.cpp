#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <queue>
#include <cstring>
#include <tuple>
#include <cmath>
#include <math.h>
#define MAX_N 10+5
#define endl "\n"
#define INF 2147483647
typedef long long ll;
//typedef pair<int, int> pii;
using namespace std;
vector<int> map;

int main(void) { 
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		map.push_back(x);
	}
	sort(map.begin(), map.end());
	for (int i = 1; i <= map[0]; i++) {
		int cnt = 0;
		for (int j = 0; j < map.size(); j++) {
			if (map[j] % i == 0) {
				cnt++;
			}
		}
		if (cnt == map.size()) cout << i << endl;
	}
}