#include <iostream>

int main()
{
	double xMin, xMax, tMax;
	int N;

	std::cout << "Enter the Minimum value for x -> xMin = ";
	std::cin >> xMin;
	std::cout << "Enter the Maximum value of x -> xMax = ";
	std::cin >> xMax;
	std::cout << "Enter the number of grid points -> N = ";
	std::cout >> N;
	std::cout << "Enter the maximum simulation time -> tMax = ";
	std::cin >> tMax;

	// calculate dx, dt
	// Set the grid
	// Choose the function: Step and Gaussian
		// Set Initial Conditions
		// Set Boundary Conditions
	// Compute Exact Solution
	// Choose the scheme: Explicit Upwind, Implicit Upwind, Lax-Wendroff, Richtmyer
	// A class called FiniteDifferenceSolver - takes in the function type, initial conditions, boundary conditions, and scheme type (?)
	//		the 4 schemes will be children of this class
	// Compute error = |numerical - exact|
	// Save results as a .csv -> Includes exact, numerical and error.
}