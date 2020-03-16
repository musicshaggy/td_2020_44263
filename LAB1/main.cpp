#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

//FEDCBA
//044263

	double fnc_delta(int A, int B, int C)
	{
		double delta = B*B - (4*A*C);
		return delta;
	}

	void square(int A, int B, int C)
	{
		double delta = fnc_delta(A,B,C);
		if (delta > 0)
		{
			cout << "delta = " << delta << endl;
			cout << "t1: " << (((-1)*B)+sqrt(delta))/(2*A) << " t2: " << (((-1)*B)-sqrt(delta))/(2*A) << endl;
		}
		else if (delta == 0)
		{
			cout << "t: " << -1*(B/2*A);
		} else 
			cout << "Brak rozwiazan" << endl;

	}
	double x(float t) {
		float a, b, c;
		a = 3;
		b = 6;
		c = 2;

		float x = a * (t * t) + b * t + c;
		return x;

	}

	double y(double t)
	{
		double y = 2 * ((x(t)) * x(t)) + 12 * cos(t);
		return y;
	}



	double z(float t) {
		double z = sin(2 * M_PI * 7 * t) * x(t) - .2 * log10(abs(y(t)) + M_PI);
		return z;
	}

	double u(float t) {
		double u = sqrt(abs(y(t) * y(t) * z(t))) - 1.8 * sin(0.4 * t * z(t) * x(t));
		return u;
	}

	double v(float t) {
		double v;
		if (t >= 0 && t < .22) {
			v = (1 - (7 * t)) * sin((2 * M_PI * t * 10) / (t + .04));
		}
		else if (t >= .22 && t < .7)
		{
			v = .63 * t * sin(125 * t);
		}
		else if (t <= 1.0 && t >= .7) {
			v = pow(t, -0.662) + .77 * sin(8 * t);
		}
		return v;
	}


	double p(float t, int n) {
		float p = 0;
		for (int i = 1; i <= n; i++) {
			p += ((cos(12 * t * (i * i)) + cos(16 * t * i)) / (i * i));
		}
		return p;
	}


	void draw(float t0, float tN, float dt)
	{
		float n = 0;
		float tn = t0;

		
		double temp;

		int w = 5;

		while (tn <= tN)
		{
			switch (w)
			{
			case 1:
				temp = y(tn);
				break;
			case 2:
				temp = z(tn);
				break;
			case 3:
				temp = u(tn);
				break;
			case 4:
				temp = v(tn);
				break;
			case 5:
				temp = p(tn, 2);
				break;
			}

			cout << tn << ";" << temp << ";" << endl;
			n++;
			tn = t0 + (n * dt);
		}
	}

int main()
{
	

	//square(3,6,2);

	draw(0,1, 0.00004535147);
	
	return 0;
}