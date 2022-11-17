#pragma once
#include <functional>
#include "Node.h"
#include "Comparator.h"

template <typename T>
class BinaryTree {
	Node<T>* pRoot;
	Comparator<T>* pComparator;

public:
	BinaryTree(Comparator<T>* pComparator) {
		this->pRoot = new Node<T>();
		this->pComparator = pComparator;
	}
	~BinaryTree() {
		this->pRoot = nullptr;
	}

	Node<T>* getRoot() const { return this->pRoot; }

	bool insert(Node<T>* pCurrent, T data) {
		if (pCurrent->isEmpty())
			pCurrent->setData(data);
		else
		{
			//go left
			if (pComparator->compare(data, pCurrent->getData()))
			{
				if (pCurrent->getLeft() == nullptr)
					pCurrent->setLeft(data);
				else
					insert(pCurrent->getLeft(), data);
			}
			//go right
			else
			{
				if (pCurrent->getRight() == nullptr)
					pCurrent->setRight(data);
				else
					insert(pCurrent->getRight(), data);
			}
		}
		return true;
	}
};
