#pragma once
#include <string>
#include "Comparator.h"

using namespace std;

/// <summary>
/// Compares two strings by length (a  < b)
/// </summary>
/// <see cref="https://www.geeksforgeeks.org/inheritance-in-c/"</see>
class StringLengthComparator : public Comparator<string>
{
public:

	bool compare(string lhs, string rhs) override {
		return lhs < rhs;
	}
};
