#pragma once

/// <summary>
/// Base class for all Comparators
/// </summary>
/// <typeparam name="T"></typeparam>
/// <see cref="https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/"</see>
template <typename T>
class Comparator
{
public:

	virtual bool operator()(T lhs, T rhs) { return false; }
	virtual bool isLessThan(T lhs, T rhs) { return false; }
};
