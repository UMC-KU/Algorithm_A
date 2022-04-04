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
bool arr[27];

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int N; cin >> N;
	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		memset(arr, false, sizeof(arr));
		string s;
		cin >> s;
		
		bool flag = false;
		char al = s[0];
		arr[al - 'a'] = true;
		for (int i = 1; i < s.length(); i++) {
			char next_al = s[i];
			if (next_al != al) {
				if (!arr[next_al - 'a']) {
					arr[next_al - 'a'] = true;
					al = next_al;
				}
				else {
					flag = true;
					break;
				}
			}
		}
		if (!flag) cnt++;
	}
	cout << cnt;
	return 0;
}