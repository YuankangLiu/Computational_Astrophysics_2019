#include <iostream>
#include <cmath>

using namespace std;

double ps_potential(double, double, double, double);
double sg_potential(double, double, double, double);
double energy_cons();

int main(){
	cout << "Test." << endl;
	return 0;
}

double ps_potential(double x, double y, double z, double v) {
	double potential = 0;
	potential = -pow(v, 2.0) / sqrt(pow(x, 2.0) + pow(y, 2.0) + pow(z, 2.0));
	return potential;
}

double sg_potential(double x, double y, double z, double v) {
	double potential = 0;
	potential = 1 / 2 * pow(v, 2.0) * log(pow(x, 2.0) + pow(y, 2.0) + pow(z, 2.0));
	return potential;
}