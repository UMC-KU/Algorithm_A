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
vector<string> res;
bool binary_searh(int left, int right, string s) {
	if (left > right) return false;
	int mid = (left + right) / 2;
	//cout << "l : " << left << " r : " << right << endl;
	//cout << v[mid] << endl;
	if (v[mid] == s)
		return true;

	if (v[mid] > s)
		return binary_searh(left, mid - 1, s);
	else return binary_searh(mid + 1, right, s);
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int N, M;
	string s;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end());
	/*for (auto e : v)
		cout << e << endl;
	*/
	
	for (int i = 0; i < M; i++) {
		cin >> s;
		if (binary_searh(0, v.size() - 1 , s)) {
			res.push_back(s);
		}
	}
	sort(res.begin(), res.end());

	cout << res.size() << endl;
	for (auto e : res)
		cout << e << endl;
}