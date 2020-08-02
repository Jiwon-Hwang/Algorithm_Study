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
		v.push_back(i); 
	}


	do {
		for (auto t : v) { 
			cout << t << ' '; 
		}
		cout << '\n';
	} while (next_permutation(v.begin(), v.end())); 


	return 0;
}