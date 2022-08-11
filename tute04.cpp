/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
using namespace std;

long Factorial(int no);
long nCr(int n, int r);

int main() {
    int n, r;
    long factorial = 1.0;

    cout << "Enter a value for n : ";
    cin >> n;
    
    cout << "Enter a value for r : ";
    cin >> r;
    
    cout << "nCr = ";
	cout << nCr(n, r);
	
	cout << endl;
    
//    cout << "Factorial of n is : ";
//    cout << Factorial(n);

    return 0;
}

long Factorial(int no)
{
	long factorial = 1.0;
	 if (no < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= no; ++i) {
            factorial *= i;
        }
        return factorial;  
    }
}
long nCr(int n, int r)
{
	int ncr;
	ncr = Factorial(n) / (Factorial(r) * Factorial(n-r));
	return ncr;
	
}