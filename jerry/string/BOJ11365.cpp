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

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while (true) {
		string str;
		getline(cin, str);
		if (str == "END") {
			break;
		}
		v.push_back(str);
	}
	for (int i = 0; i < v.size(); i++) {
		for (int j = v[i].length() - 1; j >= 0; j--) {
			cout << v[i][j];
		}
		cout << endl;
	}
}