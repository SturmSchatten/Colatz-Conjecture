#include <iostream>
#include <chrono>
#include <iomanip>

long double t, a, length;
unsigned long long int n, maxX, maxY, oldM;
using namespace std;


int main()
{
	
	oldM = 0;
	cout << "Enter the number of iterations: ";
	cin >> length;
	auto start = chrono::high_resolution_clock::now();

	for (int i = 1; i < length; i++)
	{
		a += 1;
		n = a;
		t = 0;
			while(n!=1)
			{
				t += 1;
				if (n % 2 == 0) 
				{
					n /= 2;
				}
				else {
					n = 3 * n + 1;
				}
				
			}
			
			oldM += t; 
			
			if (maxY < t) {
				maxY = t;
				maxX = i;
			}
	}
	cout <<"Total internal iterations: " << oldM << "\n" << "Max X: " << maxX << "\n" << "Max Y: " << maxY << "\n";
	auto end = chrono::high_resolution_clock::now();
	double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();

	time_taken *= 1e-9;

	cout << "Execution Time : " << fixed << time_taken << setprecision(9) << " sec" << endl;
	system("pause");
	return 0;
}

