#include <iostream>
using namespace std;

int main(void) {
	int x = 100;
	int y = 6;
	int i = 0;
	long long int puissance;
	puissance = x;

	while (i < y - 1) {
		puissance = puissance * x;
		i++;
	}
	cout << puissance;
	return 0;
}
