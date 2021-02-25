#include <iostream>
using namespace std;

int main()
{
	float theFloat = 1.0f;
	float *thePointer = &theFloat;
	cout << theFloat << endl;
	cout << *thePointer << endl;
	*thePointer = 2.3f;
	cout << theFloat << endl;
	cout << *thePointer << endl;

}
