/*
1330_�� �� ���ϱ�
#include <iostream>
using namespace std;
int main(void) {
	int a, b;
	cin >> a >> b;
	if (a > b) { cout << ">"; }
	else if (a < b) { cout << "<"; }
	else { cout << "=="; }
	return 0;
}

9498_���� ����
#include <iostream>
using namespace std;
int main(void) {
	int a;
	cin >> a ;
	if (a >= 90) { cout << "A"; }
	else if (a >= 80) { cout << "B"; }
	else if (a >= 70) { cout << "C"; }
	else if (a >= 60) { cout << "D"; }
	else { cout << "F"; }
	return 0;
}

2753_����
#include <iostream>
using namespace std;
int main(void) {
	int a;
	cin >> a ;
	if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0)) { cout << "1"; }
	else { cout << "0"; }
	return 0;
}
14861_��и� ����
#include <iostream>
using namespace std;
int main(void) {
	int x, y;
	cin >> x;
	cin >> y;
	if (x > 0) {
		if (y > 0) { cout << "1"; }
		else { cout << "4"; }
	}
	else {
		if (y > 0) { cout << "2"; }
		else { cout << "3"; }
	}
}

2884_�˶� �ð�
#include <iostream>
using namespace std;
int main(void) {
	int h, m;
	cin >> h >> m;
	if (m < 45) {
		if (h == 0) { h = 24; }
		cout << h - 1 << " " << 15 + m;
	}
	else { cout << h << " " << m - 45; }
	return 0;
}

*/

#include <iostream>
using namespace std;
int main(void) {
	int h, m;
	cin >> h >> m;
	if (m < 45) {
		if (h == 0) { h = 24; } 
		cout << h - 1 << " " << 15 + m;
	}
	else { cout << h << " " << m - 45; }
	return 0;
}