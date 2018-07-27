#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

ofstream lambdas, attractor;

const int recorded_cycle = 1000;
const int iterated_cycle = 20000;

inline void logistic(double lambda, double x = 0.5)
{
	for(int i = 0; i < iterated_cycle; i++)
	{
		x = lambda * x * (1-x);
	}
	for(int i = 0; i < recorded_cycle; i++)
	{
		x = lambda * x * (1-x);
		attractor << x << " ";
	}

}

inline void graphing(double step = 0.01)
{
	for(double lambda = 0.0; lambda < 4.0; lambda += step)
	{
		for(int i = 0; i < recorded_cycle; i++)
		{
			lambdas << lambda << " ";
		}
		logistic(lambda);
	}
}

int main()
{
	lambdas.open("lambda.data");
	attractor.open("attractor.data");

	graphing();

	return 0;
}
