#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream infile("data.dat");

	char c;

	infile.get(c);

	cout << "The first character in the file is: " << c << endl;

	return 0;
}