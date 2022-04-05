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
bool arr[27];
bool is_f_possible(string s) {
	for (int i = 0; i < s.length(); i++) {
		arr[s[i] - 'a'] = true;
	}

	if (arr[0] || arr[4] || arr[8] || arr[14] || arr[20]) return true;
	else return false;
}
bool is_t_possible(string s) {
	bool is_mo;
	if ((s[0] - 'a') == 0 || (s[0] - 'a') == 4 || (
		s[0] - 'a') == 8 || (s[0] - 'a') == 14 || (s[0] - 'a') == 20) is_mo = true;
	else is_mo = false;

	int cnt = 1;
	for (int i = 1; i < s.length(); i++) {
		if (is_mo) {
			if ((s[i] - 'a') == 0 || (s[i] - 'a') == 4 || (
				s[i] - 'a') == 8 || (s[i] - 'a') == 14 || (s[i] - 'a') == 20) cnt++;
			else {
				is_mo = false;
				cnt = 1;
			}
		}
		else {
			if ((s[i] - 'a') == 0 || (s[i] - 'a') == 4 || (
				s[i] - 'a') == 8 || (s[i] - 'a') == 14 || (s[i] - 'a') == 20) {
				is_mo = true;
				cnt = 1;
			}
			else cnt++;
		}
		
		if (cnt >= 3) return false;
	}
	return true;
}

bool is_th_possible(string s) {
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] == s[i + 1]) {
			if (s[i] == 'e' || s[i] == 'o') continue;
			else return false;
		}
	}
	return true;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	while (true) {
		string str;
		cin >> str;
		if (str == "end") break;

		memset(arr, false, sizeof(arr));
		bool flag = false;
		
		if (is_f_possible(str)) {
			if (is_t_possible(str)) {
				if (is_th_possible(str)) {
					flag = true;
				}
			}
		}
		if (flag) cout << "<" << str << "> is acceptable." << endl;
		else cout << "<" << str << "> is not acceptable." << endl;
	}
}