#pragma once
#include "Comparator.h"

class IntComparator : public Comparator<int>
{
public:
	bool operator()(int lhs, int rhs) {
		return lhs < rhs;
	}

	bool isLessThan(int lhs, int rhs) {
		return lhs < rhs;
	}
};
