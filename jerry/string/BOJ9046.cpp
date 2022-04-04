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
vector<string> v;
char arr[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
int cnt[27];
int n;

void solve(string s) {
	memset(cnt, 0, sizeof(cnt));
	
	for (int j = 0; j < s.length(); j++) {
		for (int k = 0; k < 26; k++) {
			if (arr[k] == s[j]) {
				cnt[k]++;
			}
		}
	}
	int max_num = -1;
	int max_idx;
	for (int k = 0; k < 26; k++) {
		if (max_num <= cnt[k]) {
			max_num = max(cnt[k], max_num);
			max_idx = k;
		}
	}
	bool flag = false;
	for (int k = 0; k < 26; k++) {
		if (max_num == cnt[k] && max_idx != k) {
			flag = true;
		}
	}
	if (flag) cout << "?";
	else cout << arr[max_idx];
	cout << endl;

}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string s;
		getline(cin, s);
		solve(s);
	}
}