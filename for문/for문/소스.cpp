/*
2739_������
#include <iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i < 10; i++) {
		cout << n << " * " << i << " = " << n * i << endl;
	}
}

10680_A+B-3
#include <iostream>
using namespace std;
int main(void) {
	int n, a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << a + b << endl;
	}
}

8393_��

15552_����A+B

2741_N���
#include <iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) { cout << i<<'\n'; }
	return 0;
}

2742_����N
#include <iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = n; i >= 1; i--) { cout << i<<'\n'; }
	return 0;
}

11021_A+B-7
#include <iostream>
using namespace std;
int main(void) {
	int n, a, b;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << '\n';
	}
	return 0;
}

11022_A+B-8
#include <iostream>
using namespace std;
int main(void) {
	int n, a, b;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": "
			<< a << " + " << b << " = " << a + b << '\n';
	}
	return 0;
}

2438_�����-1
#include <iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) { cout << "*"; }
		cout << endl;
	}
	return 0;
}

2439_�����-2
#include <iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int k = 0; k < n-i; k++) { cout << " "; }
		for (int j = 0; j < i; j++) { cout << "*"; }
		cout << endl;
	}
	return 0;
}

10871_X���� ���� ��
#include <iostream>
using namespace std;
int main(void) {
	int n, x, a;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a < x) { cout << a<<" "; }
	}
	return 0;
}

*/

#include <iostream>
using namespace std;
int main(void) {
	int n, x, a;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a < x) { cout << a<<" "; }
	}
	return 0;
}