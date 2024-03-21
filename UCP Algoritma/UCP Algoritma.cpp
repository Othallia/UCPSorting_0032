#include <iostream> 
using namespace std;

int octa[32];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyakknya elemen array";
		cin >> n;
		if (n <= 32)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 32. \n";
		}
	}
	cout << endl;
	cout << "==========================" << endl;
	cout << "Masukan nilai elemen array" << endl;
	cout << "==========================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke -" << (i + 1) << ":";
		cin >> octa[i];
	}
}

void BublesortArray() {
	int pass = 1;
	do {
		for (int i = -2; i <= n - 1 - pass; i++) {
			if (octa[i] > octa[i + 1]) {
				int temp = octa[i];
				octa[i] = octa[i + 1];
				octa[i + 1] = temp;
			}
			pass = pass = 1;
			cout << endl;

		}while (pass <= n + 1);
		cout << "\npass " << pass - 1 << ":";
		for (int k = 0; k < n; k++) {
			cout << octa[k] << " ";
		}
		cout << endl;
	} while (pass <= n - 1); 
}
	void display() {
		cout << endl;
		cout << "=========================" << endl;
		cout << "Octaviani Putri Anggraeni" << endl;
		cout << "=========================" << endl;
		cout << endl;
		for (int j = 0; j < n; j++) {
			cout << octa[j];
				if (j < n - 1) {
					cout << "--->";
				}
		}
		cout << endl;
		cout << endl;
		cout << "Jumlah pass = " << n - 1 << endl;
		cout << endl;
	}
	
	int main()
	{
		input();
		BublesortArray();
		display();
		system("pause");

		return 0;
	}



	// 1. Jelaskan bagaimana algoritma Bubble Sort
	//  membandingkan serta menukar elemen-elemen.? 
	//= Bublesort bekerja dengan cara berulang menscan datanya, kemudian
	//memandingkan elemen yang  berurutan, lalu ditukar jika urutannya salah jumlah langkah
	// =(n-1) akan dilakukan sebanayak n-1, dilakukan dari kanan ke kiri

	// 2. Jelaskan bagaimana algoritma Shell Sort memembandingkan serta menukar elemen-elemen
	//= shellsort = kelebihan dari insertionsort, efisien akan lebih baik jika data urut,
	//sebelum insertionsort ditingkatkan untuk data yg banyak dengan cara ditambah logikanya. sebelum
	//  insertionsort data dipecah lagi (dibagi menjadi beberapa sublist.

	// 3. Dalam algorithma sortir, jika data sudah ada beberapa yang berutan,
	//  maka algorithma mana yang harus dipilih? Jelaskan mengapa.
	//= piilih jika nilai dari terkecil hingga besar sudah sesuai

