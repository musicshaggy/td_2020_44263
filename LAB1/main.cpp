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
	
	 while(tn<=tN)
	 {
		cout << tn << ";" << double(3*(tn*tn) + (6*(tn)) + 2*(tn))<< ";" << endl;
		n++;
		tn = t0+(n*dt);
	 }

	}

int main()
{

	square(3,6,2);

	draw(-10,10, 0.01);
	



system("Pause");
return 0;
}