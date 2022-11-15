#pragma once
#include <functional>
#include "Node.h"
#include "Comparator.h"

template <typename T>
class BinaryTree {
	Node<T>* pRoot;
	Comparator<T> comparator;

public:
	BinaryTree(Comparator<T> comparator) {
		this->pRoot = new Node<T>();
		this->comparator = comparator;
	}
	~BinaryTree() {
		this->pRoot = nullptr;
		this->comparator = comparator;
	}

	Node<T>* getRoot() const { return this->pRoot; }

	bool insertNode(Node<T>* pCurrent, const T& data) {
		if (pCurrent->isEmpty())
			pCurrent->setData(data);
		else
		{
			//left
			if (comparator.isLessThan(data, pCurrent->getData()))
			{
				if (pCurrent->getLeft() == nullptr)
					pCurrent->setLeft(data);
				else
					insertNode(pCurrent->getLeft(), data);
			}
			//right
			else
			{
				if (pCurrent->getRight() == nullptr)
					pCurrent->setRight(data);
				else
					insertNode(pCurrent->getRight(), data);
			}
		}
		return true;
	}
};
