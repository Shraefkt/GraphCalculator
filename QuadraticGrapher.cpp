#include "QuadraticGrapher.h"

void QuadraticGrapher::get_coordinates(double a, double b, double c) {
	int count = 0;
	for (int i = -SIZE / 2; i < SIZE-1 / 2 + 1; i++) {
		coordinates[count].x = i;
		coordinates[count].y = double(double(i * i) * a + (b * i) + c);
		count++;
	}
}

void QuadraticGrapher::plot(double a, double b, double c)
{
	//wrapper
	get_coordinates(a, b, c);
	transform_into__graph_array();
	print_graph();
}
