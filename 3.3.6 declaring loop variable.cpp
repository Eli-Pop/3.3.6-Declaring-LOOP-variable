// Declare loop control variable inside the for.

#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int fact = 1;

	// compute the factorial of the nubers through 5
	for (int i = 1; i <= 5; i++) // Here, i is declared inside the for loop.
	{
		sum += i; // i is known throughout the loop
		fact *= i;
	}

	cout << "Sum is " << sum << "\n";
	cout << "Factorial is " << fact;

	cout << "\n";
	//system("pause");
	return 0;
}