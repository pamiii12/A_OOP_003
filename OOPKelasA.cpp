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
	void tampildata() {
		cout << "\nnim : " << nim << endl;
		cout << "nama : " << nama << endl;
	}
};

class Matakuliah {
private:
	string kode;
	string namaMk;
	int sks;
public:
	void inputMk();
	void tampilMk();

};