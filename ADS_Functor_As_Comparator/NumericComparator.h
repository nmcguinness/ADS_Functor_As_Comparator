#pragma once
#include "Comparator.h"

/// <summary>
/// Compares two int or floats by value (a  < b)
/// </summary>
/// <see cref="https://www.geeksforgeeks.org/inheritance-in-c/"</see>
class NumericComparator : public Comparator<double>
{
public:

	bool compare(double lhs, double rhs) override {
		return lhs < rhs;
	}
};
