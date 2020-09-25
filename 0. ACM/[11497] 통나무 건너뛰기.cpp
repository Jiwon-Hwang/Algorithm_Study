#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <math.h>
#include <tuple>
#include <typeinfo>  // operator typeid

using namespace std;

int T;
int N;

int main(void) {
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        vector<int> L_v;
        int l;
        for (int j = 0; j < N; j++) {
            cin >> l;
            L_v.push_back(l);
        }

        sort(L_v.begin(), L_v.end());

        int tmp_max = 0;
        for (int k = 2; k < N; k++) {
            tmp_max = max(tmp_max, L_v[k] - L_v[k - 2]);
        }

        cout << tmp_max << endl;
    }
    return 0;
}


/*
int tmp_max = 0;

for (int m = 0; m < N - 2; m += 2) { tmp_max = max(tmp_max, L_v[m + 2] - L_v[m]); }

tmp_max = max(tmp_max, L_v[N - 1] - L_v[N - 2]);

for (int n = 1; n < N - 2; n += 2) { tmp_max = max(tmp_max, L_v[n + 2] - L_v[n]); }

cout << max(tmp_max, L_v[1] - L_v[0]) << endl;
*/