/*
10952_A+B-5
#include <iostream>
using namespace std;
int main(void) {
	int a, b;
	cin >> a >> b;
	while (a != 0 && b != 0) {
		cout << a + b << endl;
		cin >> a >> b;
	}
	return 0;
}

10951_A+B-4
#include <iostream>
using namespace std;
int main(void) {
	int a, b;
	while (cin >> a >> b) { cout << a + b << endl; }
	return 0;
}

1110_더하기사이클
#include <iostream>
using namespace std;
int main()
{
	int n, num, i, j;
	int count = 0;
	cin >> n;
	num = n;
	while (1)
	{
		i = n / 10;
		j = n % 10;
		n = j * 10 + ((i + j) % 10);
		count++;

		if (n == num) { cout << count << endl; break; }
	}
	return 0;
}
*/

#include <iostream>
using namespace std;
int main()
{
	int n, num, i, j;
	int count = 0;
	
	cin >> n;
	num = n;
	while (1)
	{
		i = n / 10;
		j = n % 10;
		n = j * 10 + ((i + j) % 10);
		count++;

		if (n == num) { cout << count << endl; break; }
	}
	return 0;
}