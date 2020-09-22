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

using namespace std;

int n, i;
bool visited[730]; // false

int main() {
    cin >> n;

    // 메모리 초과 해결을 위해 [730] 넘는 숫자들 먼저 1회 처리
    int first_sum = 0;
    int first_ii = n;
    while (first_ii != 0) {
        first_sum += pow(first_ii % 10, 2);
        first_ii /= 10;
    }
    i = first_sum;

    while (1) {
        if (visited[i]) {
            cout << "UNHAPPY" << endl;
            break;
        }
        else if (i == 1) {
            cout << "HAPPY" << endl;
            break;
        }

        visited[i] = true;

        int pow_sum = 0;
        int ii = i;
        while (ii != 0) {
            pow_sum += pow(ii % 10, 2);
            ii /= 10;
        }
        i = pow_sum;
    }
    
    
    return 0;
}