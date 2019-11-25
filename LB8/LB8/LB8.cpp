#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

void main()
{
    cout << "Hello World!\n";
	int lb;
	cout << "which lab you want to run(1,2,3,4)\n";
	cin >> lb;
	while (true) {
		if (lb == 1) {
			float D[9];
			float sumd, sumv, amd, amv;
			sumd = 0;
			sumv = 0;
			amd = 0;
			amv = 0;
			for (int i = 0; i < 10; i++) {
				cin >> D[i];
				if (D[i] > 0) {
					sumd += D[i];
					amd++;
				}
				else if (D[i] < 0) {
					sumv += D[i];
					amv++;
				};
			};
			cout << "sum v:" << sumv << "\nnum v:" << amv << endl;
			cout << "sum d:" << sumd << "\nnum d:" << amd << endl;
			cout << "which lab you want to run(1,2,3,4)\n";
			cin >> lb;
		}
		if (lb == 2) {

			float D[5][5];
			float sum = 0;
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					cin >> D[i][j];
				}
				if (D[i][i] > 0) {
					sum += D[i][i];
				}			
			};
			cout << sum <<endl;
			cout << "which lab you want to run(1,2,3,4)\n";
			cin >> lb;
		}
		if (lb == 3) {
			float D[4][4];
			float A[4][4];
			float B[4][4];
			float minus = 0, plus = 0;
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					cin >> D[i][j];
					if (D[i][j] > 0) {
						A[i][j] = D[i][j];
						plus++;
					}
					else if (D[i][j] < 0) {
						B[i][j] = D[i][j];
						minus++;
						
					}
				}              
			};




			cout << "plus " << plus << endl;
			cout << "minus " << minus << endl;
			/*
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					cin >> B[i][j] >> endl;
				}
			};
			
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					cin >> B[i][j] >> endl;
				}
			};*/

			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					
					cout << A[i][j] << "\t";

				}
				cout << endl;
			}
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					cout << B[i][j] << "\t";
				}
				cout << endl;
			}


			cout << "which lab you want to run(1,2,3,4)\n";
			cin >> lb;
		}
		if (lb == 4) {





			cout << "which lab you want to run(1,2,3,4)\n";
			cin >> lb;
		}
		if (lb > 0 || lb <= 0) {
			cout << "which lab you want to run(1,2,3,4)\n";
			cin >> lb;
		}
	}
}