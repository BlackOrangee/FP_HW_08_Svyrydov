#include <iostream>
using namespace std;

int main()	//Task 1. Write a program that calculates the sum of integers from A to 500 (the value of a is entered from the keyboard).
{
	int b = 500, a = 0, sum = 0;
	
	cout << "\n\n\tTo calkulate the sum of integers from A to 500\n\n\tEnter the A: ";	cin >> a; // Data input

	if (a <= b) {

		for (b; b >= a; --b) {  // (500; 500 >= b; --500)

			sum += b;			// 500 + 499 + 498...
		}
		cout << "\n\tSum from " << a << " to 500 is " << sum << "\n\n\n"; // Data output
	}
	else
	{
		cout << "\n\n\tIncorrect value";	// Error
	}
}




#include <iostream>
using namespace std;

int main()		//Task 2. Write a program that asks for two integers x and y, then calculates and outputs the value of x to the power of y.
{
	int x, y, pow;

	cout << "\n\n\tEnter the X and Y to calculate X power of Y\n\n\t";	cin >> x >> y;	// Data input

	pow = x;

	for (int a = 1; a < y; a++) {

		pow *= x;	// Calculation
	}
	cout << "\n\t" << x << " ^ " << y << " = " << pow << "\n\n\n";	// Output value
}




#include <iostream>
using namespace std;

int main()		   //Task 3. Find the arithmetic mean of all integers from 1 to 1000.
{
	long mean = 0;

	for (int a = 1000; a >= 1; --a) {

		mean += a;	// Sum of all numbers
	}
	mean = mean / 1000;	// Arifmetic mean

	cout <<"\n\n\tArifmetic mean of all integers from 1 to 1000 is " << mean << "\n\n\n";	// Result
}






#include <iostream>
using namespace std;

int main()			//Task 4. Find the product of all integers from a to 20 (the value of a is entered from the keyboard: 1<=a<=20).
{
	int a, b = 20;

	cout << "\n\n\tEnter the A to calculate product of all integers from A to 20: ";	cin >> a; // Input A

	if ((a >= 1) && (a <= b)) {

		long long prod = 1;		// "long long" to show product from 1 to 20 (2432902008176640000)

		for (b; b >= a; --b) {

			prod *= b;		// Product
		}
		cout << "\n\tProduct all integers from " << a << " to 20 --> " << prod << "\n\n\n";		// Output result
	}
	else
	{
		cout << "\n\n\tIncorrect value";	// Error
	}
}





#include <iostream>
using namespace std;

int main()			//Task 5. Write a program that displays the multiplication table by k on the screen, where k is the option number.
{
	int k, m;

	cout << "\n\n\tEnter the number to show multiplication table: ";	cin >> k;	// Input variant
	cout << "\n\n\t";

	for (int n = 2; n <= 9; n++) {

		m = k * n;	// Multiplication result

		cout << k << " x " << n << " = " << m << "\n\t"; // Output (input value x Number (2 - 9) = Result
	}
}