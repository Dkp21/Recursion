#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int getFib(int n)
{
	if(n <= 0)
	{
		return 0;
	}

	if(n == 1)
	{
		return 1;
	}

	return getFib(n-1) + getFib(n-2);
}

int main(int argc, char **argv)
{

	if(argc != 2)
	{
		cout << "Please provide int argument \"n\"" << endl;
		return 1;
	}
	
	stringstream ss;
	ss.str(argv[1]);
	
	int n;

	ss >> n;

	cout << "Fibonacci  F(" << n << ") - " <<  getFib(n) << endl;

	return 0;
}
