#ifndef BasicGrapher_h
#define BasicGrapher_h
#include <iostream>
using namespace std;
struct coordinate
{
	double x;
	double y;
};
class BasicGrapher
{
protected:
	static const int SIZE = 20;
	coordinate coordinates[SIZE];
	char graph[SIZE + 1][SIZE + 1];
public:
	void transform_into__graph_array();
	void print_graph();
};

#endif