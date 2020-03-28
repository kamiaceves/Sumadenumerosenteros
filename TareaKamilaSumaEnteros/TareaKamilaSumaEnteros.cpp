#include<iostream>
#include <string>

using namespace std;

int main()
{

	int n=0;
	string p = "";
	
	cout << "Insert number\n";
	std::cin >> p;
	for (int x = 0; x < p.length(); x++) {

		n += p[x] - 48;

	}
	cout << "Num of Digits :" << p.length() << "\n";
	cout << "The sum of all digits :" << n;
	return 0;
}