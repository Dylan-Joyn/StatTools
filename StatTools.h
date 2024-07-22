#pragma once
#ifndef STATTOOLS_H
#define STATTOOLS_H

#include <algorithm>
#include <unordered_map>
#include <cmath>

using namespace std;

class StatTools {
public:
    static long long getMax(const long long data[], int size);
    static long long getMin(const long long data[], int size);
    static double getMean(const long long data[], int size);
    static long long getMode(const long long data[], int size);
    static double getMedian(long long data[], int size);
};

#endif


