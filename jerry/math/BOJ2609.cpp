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
int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b;
	cin >> a >> b;

	cout << gcd(a, b) << endl << lcm(a, b);
}