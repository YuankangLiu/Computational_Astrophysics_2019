#include <iostream>
#include <cmath>

using namespace std;

double ps_potential(double, double, double, double);
double sg_potential(double, double, double, double);
double energy_cons();

int main(){
	double v[3];

	// Define consant
	double e = 0;
	double v_0 = 1.0;

	// Innitial conditions for velocity
	v[0] = 0;				// Velocity in x-direction
	v[1] = (1 + e) * v_0;	// Velocity in y-direction
	v[2] = 0;				// Velocity in z-direction

	cout << "Test." << endl;
	return 0;
}

double ps_potential(double x, double y, double z, double v_0) {
	double potential = 0.0;
	potential = -pow(v_0, 2.0) / sqrt(pow(x, 2.0) + pow(y, 2.0) + pow(z, 2.0));
	return potential;
}

double sg_potential(double x, double y, double z, double v_0) {
	double potential = 0.0;
	potential = 1.0 / 2.0 * pow(v_0, 2.0) * log(pow(x, 2.0) + pow(y, 2.0) + pow(z, 2.0));
	return potential;
}

double energy_cons(double v[3], double potential) {
	double energy = 0.0;
	energy = 1.0 / 2.0 * (pow(v[0], 2.0) + pow(v[1], 2.0) + pow(v[2], 2.0)) + potential;
	return energy;
}