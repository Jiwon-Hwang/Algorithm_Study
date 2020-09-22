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
#include <typeinfo>       // operator typeid

using namespace std;

int T, N, M;
int X = 0;
int Y = 0;
int pan[101] = {-1,};
int cnt = 0;
vector<int> cnt_v;

int main() {
    cin >> T;

    for (int n = 0; n < T; n++) {
        cin >> N >> M;

        int tmp;

        for (int i = M; i > 0; i--) {
            cin >> tmp;
            X += tmp * pow(10, i - 1);
        }

        for (int j = M; j > 0; j--) {
            cin >> tmp;
            Y += tmp * pow(10, j - 1);
        }

        for (int k = 0; k < N; k++) {
            scanf("%d", &pan[k]);
        }

        //pow() return : double 형!!!
        /*
        printf("%d %d %d\n", X, pow(10, 3), M);
        cout << X / pow(10, M-1) << endl;
        cout << int(X / pow(10, M - 1)) << endl;
        cout << typeid(pow(10, M - 1)).name() << typeid(X / pow(10, M - 1)).name() << endl;
        */

        for (int l = 0; l < N; l++) {
            if ((pan[l] < X / int(pow(10, M - 1))) || (pan[l] > Y / int(pow(10, M - 1)))) {
                continue;
            }

            int tmp_num = 0;

            for (int m = 0; m < M; m++) {
                tmp_num += pan[(l + m) % N] * pow(10, M - m - 1); // 다시 pan 맨 앞으로
            }
            
            if (tmp_num >= X && tmp_num <= Y) {
                cnt++;
            }
        }

        cnt_v.push_back(cnt);

        X = 0;
        Y = 0;
        cnt = 0;
        pan[101] = { -1, };
    }
    
    for (int idx = 0; idx < T; idx++) {
        cout << cnt_v[idx] << endl;
    }

    
    return 0;
}