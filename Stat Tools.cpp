// Stat Tools.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StatTools.h"

using namespace std;

int main() {
    long long data[] = { 85,36,54,43,23,54,89,98,100,20,26 };
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Max: " << StatTools::getMax(data, size) << endl;
    cout << "Min: " << StatTools::getMin(data, size) << endl;
    cout << "Mean: " << StatTools::getMean(data, size) << endl;
    cout << "Mode: " << StatTools::getMode(data, size) << endl;
    cout << "Median: " << StatTools::getMedian(data, size) << endl;

}

