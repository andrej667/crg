#include<iostream>

using namespace std;

int main() {
	int otazka;
	cout << "Kolko je 45 + 50 ? A) 15 B)25 C)95 D)21" << endl;
	cin >> otazka;
	if (otazka == 95) {
		cout << "spravna odpoved" << endl;
	}
	else {
		cout << "zla odpoved <<" << endl;
	}

	int otazkaa;
	cout << "Kolko je 45 + 51 ? A) 96 B)25 C)95 D)21" << endl;
	cin >> otazkaa;
	if (otazkaa == 96) {
		cout << "spravna odpoved" << endl;
	}
	else {
		cout << "zla odpoved <<" << endl;
	}
	int otazkab;
	cout << "Kolko je 20 + 51 ? A) 96 B)25 C)95 D)71" << endl;
	cin >> otazkab;
	if (otazkab == 71) {
		cout << "spravna odpoved" << endl;
	}
	else {
		cout << "zla odpoved <<" << endl;
	}
	return 0;
}