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

	for (int i = 1; i <= 5; i++) {
		v.push_back(i);
	}
	int arr[5] = { 0, 0, 0, 1, 1 };

	do {
		for (int i = 0; i < 5; i++) {
			if (arr[i] == 0) cout << v[i] << ' ';
		}
		cout << '\n';
	} while (next_permutation(arr, arr + 5));


	return 0;
}