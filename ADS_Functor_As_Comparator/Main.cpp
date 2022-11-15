// ADS_Functor_As_Comparator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BinaryTree.h"
#include "CarComparator.h"
#include "IntComparator.h"

int main()
{
	IntComparator intComparator;
	BinaryTree<int> tree1(intComparator);
	Node<int>* pRoot1 = tree1.getRoot();
	tree1.insertNode(pRoot1, 50);
	tree1.insertNode(pRoot1, 25);
	tree1.insertNode(pRoot1, 100);

	CarComparator carComparator;
	BinaryTree<Car> tree2(carComparator);
	Node<Car>* pRoot2 = tree2.getRoot();

	Car c1("ford", 5, 10000);
	tree2.insertNode(pRoot2, c1);

	Car c2("nissan", 4, 35000);
	tree2.insertNode(pRoot2, c2);

	Car c3("toyota", 6, 45000);
	tree2.insertNode(pRoot2, c3);
}