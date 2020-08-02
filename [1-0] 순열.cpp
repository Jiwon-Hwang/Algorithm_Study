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
#include <iostream> : �������(.h), 'iostream'�̶�� ��� ������ ��� ������ �����ؿͼ� ���.
���� cin, cout, endl�� ���� ����� ��ü���� ���� ���� �ٷ� ��� ����!

using namespace std : iostream ���� ��� ��ü�� std::��� ���� �ٿ����������, 
namespace�� ����ϸ� std:: ���� ����. '�̸� ����'!
*/


int main() {
	vector<int> v;
	
	for (int i = 1; i <= 5; i++) {
		v.push_back(i); //<vector>
	}


	do {
		for (auto t : v) { // t�� �ڵ����� v ���� ��� �׸�� �� Ž��
			cout << t << ' '; // endl(����) ��� '\n'�̳� ' ' ��� ����
		}
		cout << '\n';
	} while (next_permutation(v.begin(), v.end())); // #<algorithm> �������, ����, �迭�� ���۰� ���ּ� �־���
	// ���� ������ ������ true��ȯ, ������ false ��ȯ

	//printf("%d, %d\n", v.begin(), v.end()); ==> ���� �ּ�, �� �ּ� (iterator)

	return 0;
}