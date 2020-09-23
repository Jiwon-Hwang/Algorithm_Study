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

int main(void) {

    int T(0);
    int m, n;
    int map[100][100];

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> m >> n;
        map[100][100] = { -1, };

        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++) {
                cin >> map[j][k];
            }
        }

        int answer = 0;

        for (int col = 0; col < n; col++) {
            int cnt = m - 1;
            for (int row = m - 1; row >= 0; row--) {
                if (map[row][col]) {
                    answer += cnt - row;
                    cnt--;
                }
            }
        }
        cout << answer << endl;
    }


    return 0;
}