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
#define MAX_N 10+5
#define endl "\n"
#define INF 2147483647
typedef long long ll;
//typedef pair<int, int> pii;
using namespace std;
vector<pair<double, double>> v;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	string S;
	cin >> S;
	int res = 0;
	for (int i = 0; i < S.length(); i++) {
		res += S[i] - '0';
	}
	cout << res;
}