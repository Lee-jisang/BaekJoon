

//비교만 하면되는데... , 경우의수 다출력!
#include <iostream>
#include <vector>
#include <cmath>;
#include <algorithm>
using namespace std;


int main() {

	


	char a[8][8] = {
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'}, };

	char b[8][8] = {
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'}, };

	char c[51][51];

	char d[8][8];


	int N, M;
	cin >> N >> M; //N과 M은 8보다 크거나 같고, 50보다 작거나 같은 자연수

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> c[i][j];
		}
	}

	int n2 = 0;
	int m2 = 8;

	for (int i = 0; i < N-8+1; i++) {//세로,3번
		int n = 0;
		int m = 8;	


		for (int j = 0; j < M-8+1; j++) {//가로, 6번



			for (int k = n2; k < m2; k++) {
				for (int l = n; l < m; l++) {
					
					cout << c[k][l];
					
				}	
				cout << "\n";	
				
			}			
			n++;
			m++;
			cout << "\n";	
		
		}
		n2++;
		m2++;
	}


}
