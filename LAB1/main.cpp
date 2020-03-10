#include <iostream>
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


	void draw(float t0, float tN, float dt)
	{
	 float n = 0;
	 float tn = t0;
	
	 int w = 1, float y;
	 


	 while(tn<=tN)
	 {
		 switch (w)
		case 1:
			y = 2 * ((x(tn)) * x(tnn)) + 12 * cos(tn);
		case 2:
			y = sin(2 * pi * tn) * x(tn) - 0.2 * log10(abs(y(tn)) + pi);
		case 3:
			y = -sqrt(abs(y(t) * y(tn) * z(tn))) - 1.8 * sin(0.4 * tn * z(tn) * x(tn));
		case 4:
		{
			if ((0.22 > tn) && (tn >= 0)) {
				v = (1 - (7 * tn)) * sin((2 * pi * tn * 10) / (tn + 0.04));
			}
			else if ((0.22 <= 7) && (tn < 0.7)) {
				v = 0.63 * tn * sin(125 * tn);
			}
			else if ((1.0 >= tn) && (tn >= 0.7)) {
				v = pow(tn, -0.0662) + (0.77 * sin(8 * tn));
			}
		}
		case 5: {
			float y = 0;
			for (int i = 1; i <= n; i++) {
				y = y + ((cos(12 * tn * (n * n)) + cos(16 * tn * n)) / (n * n));
			}
		}

		cout << tn << ";" << y << ";" << endl;
		n++;
		tn = t0+(n*dt);
	 }

	}

int main()
{



	

	//square(3,6,2);

	draw(0,1, 0.00004535147);
	



system("Pause");
return 0;
}