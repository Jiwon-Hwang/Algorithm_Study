#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <math.h>

using namespace std;

/*
#include <iostream> : 헤더파일(.h), 'iostream'이라는 헤더 파일의 모든 내용을 복사해와서 사용.
따라서 cin, cout, endl과 같은 입출력 객체들의 정의 없이 바로 사용 가능!

using namespace std : iostream 안의 모든 객체는 std::라는 수식 붙여줘야하지만, 
namespace를 사용하면 std:: 생략 가능. '이름 공간'!
*/


int main() {
	vector<int> v;
	
	for (int i = 1; i <= 5; i++) {
		v.push_back(i); //<vector>
	}


	do {
		for (auto t : v) { // t가 자동으로 v 내의 모든 항목들 다 탐색
			cout << t << ' '; // endl(개행) 대신 '\n'이나 ' ' 사용 가능
		}
		cout << '\n';
	} while (next_permutation(v.begin(), v.end())); // #<algorithm> 헤더파일, 벡터, 배열의 시작과 끝주소 넣어줌
	// 다음 순열이 있으면 true반환, 없으면 false 반환

	//printf("%d, %d\n", v.begin(), v.end()); ==> 시작 주소, 끝 주소 (iterator)

	return 0;
}