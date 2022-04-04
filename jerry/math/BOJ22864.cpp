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

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, c, m;
	cin >> a >> b >> c >> m;

	int p = 0;
	int time = 24;
	int work = 0;
	while (time--) {
		if (p + a <= m) { // 일을 함
			p += a;
			work += b;
		}
		else {
			p -= c;
			if (p < 0) p = 0;
		}
	}
	cout << work;
}