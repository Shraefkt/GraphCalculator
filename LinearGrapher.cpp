#include "LinearGrapher.h"

void LinearGrapher::get_coordinates(double m, double c)
{
	int count = 0;
	for (int i = -SIZE / 2; i < SIZE / 2 + 1; i++) {
		coordinates[count].x = i;
		coordinates[count].y = i * m + c;
		count++;
	}
}

void LinearGrapher::plot(double m, double c)
{
	//wrapper
	get_coordinates(m,c);
	transform_into__graph_array();
	print_graph();
}


/*
void LinearGrapher::get_coordinates(int y, int m, int c, bool show_points) {
	covert_to_mc(y, m, c);
	int count = 0;
	for (int i = -SIZE / 2; i < SIZE / 2 + 1; i++) {
		coordinates[count].x = i;
		coordinates[count].y = i * m + c;
		if (show_points) {
			cout << "(" << coordinates[count].x << "," << coordinates[count].y << ")\n";
		}
		count++;
	}
}
void LinearGrapher::get_graph(int y, int m, int c) {
	get_coordinates(y, m, c);
	for (int y = 0; y < SIZE + 1; y++) {
		for (int x = 0; x < SIZE + 1; x++) {
			// graph lines
			if (x == SIZE / 2 || y == SIZE / 2) {
				graph[y][x] = '#';
			}
			else {
				graph[y][x] = ' ';
			}
			//main line
			for (int i = 0; i < SIZE + 1; i++) {
				if (x == coordinates[i].x + SIZE / 2 && y == -coordinates[i].y + SIZE / 2) {
					graph[y][x] = '*';
				}
			}
		}
	}

}
void LinearGrapher::print_graph(int y, int m, int c) {
	get_graph(y, m, c);
	cout << endl;
	for (int i = 0; i < SIZE + 1; ++i)
	{
		for (int j = 0; j < SIZE + 1; ++j)
		{
			cout << graph[i][j] << "  ";
		}
		cout << "\n";
	}
	cout << endl;
}
void LinearGrapher::covert_to_mc(int& y, int& m, int& c) {
	m = m / y;
	c = c / y;
}
*/