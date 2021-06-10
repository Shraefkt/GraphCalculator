// GraphCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "Calculator.h"
#include "LinearGrapher.h"
#include "QuadraticGrapher.h"
void help();
int main()
{
    int mode = 0;
    int choice;
    LinearGrapher lg;
    QuadraticGrapher qg;
    do {
        help();
        cout << "Command: ";
        cin >> choice;
        switch (choice) {
        case 1: {
            int raw;
            cout << "New Mode(eg. 0):";
            cin >> raw;
            if (raw == 0) {
                mode = 0;
                cout << "Mode successfully switched to linear" << "\n";
            } 
            else if (raw == 1) {
                mode = 1;
                cout << "Mode successfully switched to quadratic" << "\n";
            }
            else {
                cout << "Input invalid. 0 for Linear. 1 for Quadratic.\n";
            }
        } break;
        case 2: {
            if (mode == 0) {
                double m, c;
                cout << "y m c (give y,m,c seperated by a space):";
                cin >> m >> c;
                lg.plot(m,c);
            }
            else if (mode == 1) {
                double a, b, c;
                cout << "a b c (give a,b,c seperated by a space):";
                cin >> a >> b >> c;
                qg.plot(a, b, c);

            }
        } break;
        default: {
            help();
        }
        }
    } while (choice!=0);
}

void help() {
    cout << "0 - EXIT\n1 - SWITCH between linear(0) and quadratic(1) mode\n2 - SHOW a graph based on equation.\n";
}