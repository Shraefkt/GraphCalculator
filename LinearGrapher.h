#include "BasicGrapher.h"

class LinearGrapher : public BasicGrapher
{
public:
	void get_coordinates(double m, double c);
	void plot(double m, double c);
};