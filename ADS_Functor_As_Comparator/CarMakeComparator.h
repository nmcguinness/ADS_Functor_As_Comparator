#pragma once
#include "Comparator.h"
#include "Car.h"

/// <summary>
/// Compares two Cars by make (a  < b)
/// </summary>
/// <see cref="https://www.geeksforgeeks.org/inheritance-in-c/"</see>
class CarMakeComparator : public Comparator<Car>
{
public:

	bool compare(Car lhs, Car rhs) override {
		return lhs.getMake() < rhs.getMake();
	}
};
