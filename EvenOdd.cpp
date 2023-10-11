#include <iostream> 
using namespace std;
int main()
{
	int v;
	cout << "Enter an integer value: ";
	cin >> v;
	if (v % 2 == 0)	// if the remainder is zero when dividing by 2
	{				// == examines the equality of two values 
		cout << "\nIt's an even number" << endl;
	}
	else
	{
		cout << "\nIt's an odd number" << endl;
	}
	system("pause");
	return 0;
}
