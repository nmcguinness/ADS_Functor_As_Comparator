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

	/// <summary>
	/// Method which will be overridden in child class (e.g. StringLengthComparator)
	/// </summary>
	/// <param name="lhs"></param>
	/// <param name="rhs"></param>
	/// <returns>True is lhs is less than rhs </returns>
	virtual bool compare(T lhs, T rhs) { return false; }
};
