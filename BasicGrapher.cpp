#include "BasicGrapher.h"

void BasicGrapher::print_graph()
{
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
void BasicGrapher::transform_into__graph_array()
{
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
