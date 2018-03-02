#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int x = 1;
	int total = 0;

	while ( x <= 10 )
	{
		total += x;
		++x;
	}

	cout << "Le programme termine et le total est " << total << endl;
	return 0;
}
