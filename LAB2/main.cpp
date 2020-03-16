#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

//CBA
//263

void kwantyzacja() {

	float A = 1.0;
	float f = 6; //Hz
	float q = 2 * M_PI;

	int n = 0;
	float t0, tN, tn, dt;
	t0 = 0;
	tN = 6;
	dt = 0.01;
	tn = t0;
	double max = -1;
	double ytab[602];
	while (tn <= tN)
	{
		double y = double(2 * A * sin(2 * M_PI * f * tn + q));
		if (max < y)
			max = y;
		ytab[n] = y;
		tn = t0 + (n * dt);
		n++;
	}

	for (int i = 0; i < 602; i++)
	{
		ytab[i] = ytab[i] / max;
	}
	
}

int main() {

	float A = 1.0;
	float f = 6; //Hz
	float q = 2 * M_PI;

	int n = 0;
	float t0, tN, tn, dt;
	t0 = 0;
	tN = 6;
	dt = 0.01;
	tn = t0;


	while (tn <= tN)
	{
		cout << tn << ";" << double(A * sin(2*M_PI*f*tn+q)) << ";" << endl;
		n++;
		tn = t0 + (n * dt);
	}


	kwantyzacja();


	return 0;


}