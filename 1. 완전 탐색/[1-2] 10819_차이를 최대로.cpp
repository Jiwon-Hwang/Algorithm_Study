#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <math.h>

using namespace std;

int main() {
	vector<int> v;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		v.push_back(t); 
	}
	/*
	for (auto x : v) {
		cout << x << ' ';
	}*/
	
	sort(v.begin(), v.end()); //next_permutation을 쓰기전에 정렬해줘야 모든 순열 얻을 수 있음. (전제)

	int tmpsum;
	int maxsum = -1;
	do {
		tmpsum = 0;
		for (int i = 0; i < n - 1; i++) {
			tmpsum += abs(v[i] - v[i+1]);
		}
		maxsum = maxsum > tmpsum ? maxsum : tmpsum;
	} while (next_permutation(v.begin(), v.end())); 

	cout << maxsum;

	return 0;
}