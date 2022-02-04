#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(int argc, char *argv[] ){
	float i = 1, x ;
	cin >> x;
	bool not_possitive = false;
	if (x<0) {
		not_possitive = true;
		x = abs(x);
	}
	float sum = 1, term = x/i;
	
	while (sum != term + sum) {
		sum = term + sum;
		i++;
		term = term * x/i;
	}	

	if (not_possitive) {
		sum = 1/sum;
		x = -x;
	}
	cout << setprecision(16);
	cout << "Значение экспоненты:  "<< sum << endl;
	cout << setprecision(32);
	cout << "Отличие от экспоненты из библиотеки cmath:  " << abs(exp(x) - sum ) << endl;
	
	return 0;
}
