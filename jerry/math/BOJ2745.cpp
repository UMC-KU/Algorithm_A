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
	
	string s; int b;
	cin >> s >> b;

	int res = 0;
	int p = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		int n;
		//cout << " s[i] : " << s[i] << endl;
		if (s[i] >= 65) {
			n = (s[i] - 'A') + 10;
		}
		else n = s[i] - '0';
		
		res += n * pow(b, p);
		//cout << "n : " << n << " b : " << b << " p : " << p << endl;
		p++;
	}
	cout << res;
}