#include <iostream>
using namespace std;

// Write the function printO() here
void printO(int i, int j)
{
	int  x, y; // i as rows j as columns
	if (i <= 0 || j <= 0)
	{
		cout << "Invalid input";

	}
	else
	{
		for (x = 0; x < i; x++)
		{
			for (y = 0; y < j; y++)
			{
				cout << "O";
			}cout << "\n";
		}
		
	}
}

int main()
{

	printO(2, 2);
	cout << "\n";

	printO(3, 5);
	cout << "\n";

	printO(5, 3);
	cout << "\n";

	printO(0, 3);
	cout << "\n";

	printO(7, -1);
	cout << "\n";

	return 0;
}
