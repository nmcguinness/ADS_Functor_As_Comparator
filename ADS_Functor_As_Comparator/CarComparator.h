#pragma once
#include "Comparator.h"
#include "Car.h"

/// <summary>
/// Compares two Cars
/// </summary>
/// <see cref="https://www.geeksforgeeks.org/inheritance-in-c/"</see>
class CarComparator : public Comparator<Car>
{
public:
	bool operator()(Car lhs, Car rhs) {
		return lhs.getPrice() < rhs.getPrice();
	}

	bool isLessThan(Car lhs, Car rhs) {
		return lhs.getPassengerLimit() < rhs.getPassengerLimit();
	}
};
