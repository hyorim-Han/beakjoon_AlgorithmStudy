/*
2557_Hello World!
#include <iostream>
using namespace  std;
int main(void) {
	cout << "Hello World!";
	return 0;
}

10718_We love kriii
#include <iostream>
using namespace  std;
int main(void) {
	cout << "����ģ�� ��������"<<endl<< "����ģ�� ��������";
	return 0;
}

10171_�����
#include <iostream>
using namespace  std;
int main(void) {
	cout << "\\    /\\" << endl;
	cout << " )  ( ')" << endl;
	cout << "(  /  )" << endl;
	cout << " \\(__)|";
	return 0;
}

10172_��
#include <iostream>
using namespace  std;
int main(void) {
	cout << "|\\_/|" << endl;
	cout << "|q p|   /}" << endl;
	cout << "( 0 )\"\"\"\\" << endl;
	cout << "|\"^\"`    |" << endl;
	cout << "||_/=\\\\__|" << endl;
	return 0;
}

1000_A+B
#include <iostream>
using namespace  std;
int main(void) {
	int a, b;
	cin >> a >> b;
	cout << a + b;
	return 0;
}

1001_A-B
#include <iostream>
using namespace  std;
int main(void) {
	int a, b;
	cin >> a >> b;
	cout << a - b;
	return 0;
}

10998_A*B
#include <iostream>
using namespace  std;
int main(void) {
	int a, b;
	cin >> a >> b;
	cout << a * b;
	return 0;
}

1008_A/B
#include <iostream>
using namespace  std;
int main(void) {
	float a, b;
	cin >> a >> b;
	cout << a / b;
	return 0;
}

10869_��Ģ����
#include <iostream>
using namespace  std;
int main(void) {
	int a, b;
	cin >> a >> b;
	cout << a + b << endl << a - b << endl <<
		a * b << endl << a / b << endl << a % b;
	return 0;
}

10430_������
#include <iostream>
using namespace  std;
int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	cout << (a + b) % c << endl << ((a % c) + (b % c)) % c << endl <<
		(a * b) % c << endl << ((a % c) * (b % c)) % c;
	return 0;
}

2588_����
#include <iostream>
using namespace  std;
int main(void) {
	int a, b;
	cin >> a;
	cin >> b;
	int i = b / 100;
	int j = (b % 100) / 10;
	int k = b % 10;
	cout << a * k << endl << a * j << endl <<
		a * i << endl << a * (k + 10 * j + i * 100);
	return 0;
}
*/
#include <iostream>
using namespace  std;
int main(void) {
	int a, b;
	cin >> a;
	cin >> b;
	int i = b / 100;
	int j = (b % 100) / 10;
	int k = b % 10;
	cout << a * k << endl << a * j << endl << 
		a * i << endl << a * (k + 10 * j + i * 100);
	return 0;
}