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

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string str;
	cin >> str;
	string find_str;
	cin >> find_str;
	string no_num_str = "";
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 65 && str[i] <= 122) {
			no_num_str += str[i];
		}
	}
	
	if (no_num_str.find(find_str) != string::npos) {
		cout << 1;
	}
	else cout << 0;
}