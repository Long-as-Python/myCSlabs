#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    cout << "Hello World!\n";
	int lb;
	cout << "which lab you want to run(1,2,3,4)\n";
	cin >> lb;
	while (true) {

		if (lb == 1) {
			int lenght, z;
			z = 0;
			//cout << "Matrix lenght";
			//cin >> lenght;
			float D[5];
			for (int i = 0; i < 6; i++) {
				cin >> D[i];
				if (D[i] < 0)z++;
				cout << "\t" << D[i];
			};
			cout << "\nnum of - numbers: " << z << endl;
			system("pause");
			cout << "which lab you want to run(1,2,3,4)\n";
			cin >> lb;
		}
		if (lb == 2) {

			int i, b, a;
			float C[9];
			float A[4];
			float B[4];
			i = 0;
			b = 0;
			a = 0;
			cout << "enter B: ";
			for (int i = 0; i < 5; i++)cin >> B[i];
			cout << "enter A: ";
			for (int i = 0; i < 5; i++)cin >> A[i];
			for (int i = 0; i <= 9; i++) {
				if (i % 2 == 0) {
					C[i] = B[b];
					b++;
				}
				else {
					C[i] = A[a];
					a++;
				}
			}
			for (int i = 0; i < 9; i++)cout << C[i];

			system("pause");
			cout << "which lab you want to run(1,2,3,4)\n";
			cin >> lb;
		}
		if (lb == 3) {
			float z;
			z = 1000000000000000000;
			float E[12];
			cout << "enter B: ";
			for (int i = 0; i < 12; i++) {
				cin >> E[i];
				if (E[i] > 0 && z>E[i]) {
					z = E[i];
				}
			}
			cout << z << endl;

			system("pause");
			cout << "which lab you want to run(1,2,3,4)\n";
			cin >> lb;
		}
		if (lb == 4) {
			//int m = 1;
			//cout << "how much bills";
			//cin >> m;
			float sum=0;
			float bank[9];
			for (int i = 0; i < 10; i++) {
				cin >> bank[i];
				if (bank[i] <= 0) {
					sum += bank[i];
					cout << "num:" << i + 1 << endl;
				}
			}
			cout << "sum: " << sum << endl;

			system("pause");
			cout << "which lab you want to run(1,2,3,4)\n";
			cin >> lb;
		}
		if (lb > 4 || lb<=0) {
			cout << "which lab you want to run(1,2,3,4)\n";
			cin >> lb;
		}
	}
}