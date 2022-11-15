#pragma once
#include <ostream>
#include <string>
using namespace std;

class Car
{
	string make;
	int passengerLimit;
	double price;

public:
	Car()
	{
	}
	Car(string make, int passengerLimit, double price)
		: make(make), passengerLimit(passengerLimit), price(price) {}

	string getMake() const { return this->make; }
	int getPassengerLimit() const { return this->passengerLimit; }
	double getPrice() const { return this->price; }

	friend ostream& operator<<(ostream& out, const Car& car)
	{
		out << car.make << ", ";
		out << car.passengerLimit << ", ";
		out << car.price;
		return out;
	}
};
