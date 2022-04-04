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
char arr[6][20];

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 1; i <= 5; i++) {
		string s;
		cin >> s;

		for (int j = 0; j < s.length(); j++) {
			arr[i][j + 1] = s[j];
		}
	}

	for (int i = 1; i <= 15; i++) {
		for (int j = 1; j <= 5; j++) {
			if (arr[j][i] != '\0') {
				cout << arr[j][i];
			}
		}
	}
}