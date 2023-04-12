#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
public:
	void inputdata() {
		cout << "masukkan nim : ";
		cin >> nim;
		cout << "masukkan nama : ";
		cin >> nama;
	}


};