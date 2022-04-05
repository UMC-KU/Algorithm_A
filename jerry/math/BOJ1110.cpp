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
	
	string s, s2;
	cin >> s;
	if (stoi(s) < 10) {
		s = '0' + s;
	}
	s2 = s;
	int cycle = 0;
	do {
		int one = ((s2[0] - '0') + (s2[1] - '0')) % 10;
		
		s2 = s2[1] + to_string(one);
		cycle++;
		//cout << s2 << endl;
	} while (s != s2);
	cout << cycle;
	// 안녕하세요
}