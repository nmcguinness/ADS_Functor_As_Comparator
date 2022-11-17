/*****************************************************************//**
 * \file   Demonstrates how we can use the same tree to store any type T and specify comparator used to go left/right on any node
 * \brief  Useful for Binary Tree discussion and any Binary Tree related CA
 * \author mcguinnn
 * \date   November 2022
 *********************************************************************/
#include <iostream>
#include "BinaryTree.h"
#include "Comparator.h"
#include "CarMakeComparator.h"
#include "NumericComparator.h"
#include "StringLengthComparator.h"

void demoTreeStoreAndStoreByFloat();
void demoTreeStoreAndStoreByStringLength();
void demoTreeStoreAndStoreByCarMake();

int main()
{
	cout << "Note: We have no BinaryTree::print() so you will need to add breakpoints to see the results!" << endl;

	cout << endl << "demoTreeStoreAndStoreByFloat to store floats..." << endl;
	demoTreeStoreAndStoreByFloat();
	cout << endl;

	cout << endl << "demoTreeStoreAndStoreByStringLength to store string..." << endl;
	demoTreeStoreAndStoreByStringLength();
	cout << endl;

	cout << endl << "demoTreeStoreAndStoreByCarMake to store cars..." << endl;
	demoTreeStoreAndStoreByCarMake();
	cout << endl;
}

//sort by a < b (numeric)
void demoTreeStoreAndStoreByFloat() {
	//note that we MUST pass a pointer to comparator (so that virtual-override will work)
	Comparator<double>* pComparator = new NumericComparator();
	BinaryTree<double> tree(pComparator);

	//get root and add some data!
	Node<double>* pRoot = tree.getRoot();
	tree.insert(pRoot, 50);
	tree.insert(pRoot, 25);
	tree.insert(pRoot, 100);
	tree.insert(pRoot, 10);
	tree.insert(pRoot, 30);
	tree.insert(pRoot, 120);
	tree.insert(pRoot, 90);
}

//sort by string length
void demoTreeStoreAndStoreByStringLength() {
	//note that we MUST pass a pointer to comparator (so that virtual-override will work)
	Comparator<string>* pComparator = new StringLengthComparator();
	BinaryTree<string> nameTree(pComparator);

	//get root and add some data!
	Node<string>* pRoot = nameTree.getRoot();
	nameTree.insert(pRoot, "dylan");
	nameTree.insert(pRoot, "ciara");
	nameTree.insert(pRoot, "bob");
	nameTree.insert(pRoot, "zebediah");
	nameTree.insert(pRoot, "frank");
	nameTree.insert(pRoot, "mark");
}

//sort by make
void demoTreeStoreAndStoreByCarMake() {
	//note that we MUST pass a pointer to comparator (so that virtual-override will work)
	Comparator<Car>* pComparator = new CarMakeComparator();
	BinaryTree<Car> carTree(pComparator);

	//get root and add some data!
	Node<Car>* pRoot = carTree.getRoot();
	Car c1("ford", 5, 10000);
	carTree.insert(pRoot, c1);
	Car c2("nissan", 4, 35000);
	carTree.insert(pRoot, c2);
	Car c3("toyota", 6, 45000);
	carTree.insert(pRoot, c3);
	Car c5("land rover", 4, 112000);
	carTree.insert(pRoot, c5);
	Car c6("kia", 9, 65000);
	carTree.insert(pRoot, c6);
}